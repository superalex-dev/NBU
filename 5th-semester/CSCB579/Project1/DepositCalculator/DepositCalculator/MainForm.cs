using System.Globalization;

namespace DepositCalculator;

public partial class MainForm : Form
{
    private const string StudentName = "Александър Боев";
    private const string FacultyNumber = "F118012";

    private const double MaxAmount = 1_000_000_000;
    private const double MaxRate = 100;
    private const int MinYears = 1;
    private const int MaxYears = 30;

    private const string NoValue = "—";
    private const string ErrorCaption = "Некоректни входни данни";

    public MainForm()
    {
        InitializeComponent();
        Text = $"Депозитен калкулатор – {StudentName}, факултетен номер: {FacultyNumber}";
    }

    private void btnGenerate_Click(object? sender, EventArgs e)
    {
        ClearResults();

        if (!TryReadInputs(out double amount, out double rate, out int years))
        {
            return;
        }

        InterestType interestType = rbCompound.Checked ? InterestType.Compound : InterestType.Simple;
        bool withholdTax = chkTax.Checked;
        List<YearResult> plan = DepositPlanner.BuildPlan(amount, rate, years, interestType, withholdTax);

        double totalNetInterest = 0;
        double totalTax = 0;
        double finalAmount = 0;
        foreach (YearResult row in plan)
        {
            lstPlan.Items.Add(FormatRow(row, withholdTax));
            totalNetInterest += row.NetInterest;
            totalTax += row.Tax;
            finalAmount = row.EndAmount;
        }

        ShowSummary(finalAmount, totalNetInterest, totalTax, withholdTax);
    }

    private void ClearResults()
    {
        lstPlan.Items.Clear();
        lblFinalAmount.Text = NoValue;
        lblTotalProfit.Text = NoValue;
    }

    private bool TryReadInputs(out double amount, out double rate, out int years)
    {
        rate = 0;
        years = 0;

        if (!TryReadNumber(txtAmount, "Моля, въведете началната сума.",
                "Полето за началната сума трябва да съдържа число (за десетичен знак може да се ползва точка или запетая).",
                out amount))
        {
            return false;
        }
        if (amount <= 0 || amount > MaxAmount)
        {
            return Reject(txtAmount, $"Началната сума трябва да е положително число, не по-голямо от {MaxAmount:N0} лв.");
        }

        if (!TryReadNumber(txtRate, "Моля, въведете годишния лихвен процент.",
                "Полето за годишния лихвен процент трябва да съдържа число (за десетичен знак може да се ползва точка или запетая).",
                out rate))
        {
            return false;
        }
        if (rate <= 0 || rate > MaxRate)
        {
            return Reject(txtRate, "Годишният лихвен процент трябва да е по-голям от 0 и не повече от 100%.");
        }

        string yearsText = txtYears.Text.Trim();
        if (yearsText.Length == 0)
        {
            return Reject(txtYears, "Моля, въведете срока на депозита в години.");
        }
        if (!int.TryParse(yearsText, out years) || years < MinYears || years > MaxYears)
        {
            return Reject(txtYears, "Срокът трябва да е цяло число от 1 до 30 години.");
        }

        return true;
    }

    private static bool TryReadNumber(TextBox box, string emptyMessage, string invalidMessage, out double value)
    {
        value = 0;
        string text = box.Text.Trim().Replace(',', '.');

        if (text.Length == 0)
        {
            return Reject(box, emptyMessage);
        }
        if (!double.TryParse(text, NumberStyles.Float, CultureInfo.InvariantCulture, out value) || !double.IsFinite(value))
        {
            return Reject(box, invalidMessage);
        }

        return true;
    }

    private static bool Reject(TextBox box, string message)
    {
        MessageBox.Show(message, ErrorCaption, MessageBoxButtons.OK, MessageBoxIcon.Warning);
        box.Focus();
        box.SelectAll();
        return false;
    }

    private void ShowSummary(double finalAmount, double totalNetInterest, double totalTax, bool withholdTax)
    {
        lblFinalAmount.Text = FormatMoney(finalAmount);
        lblTotalProfit.Text = withholdTax
            ? $"{FormatMoney(totalNetInterest)} (удържан данък: {FormatMoney(totalTax)})"
            : FormatMoney(totalNetInterest);
    }

    private static string FormatRow(YearResult row, bool withholdTax)
    {
        string text = $"Година {row.Year}: Начална сума: {FormatMoney(row.StartAmount)} | Лихва: {FormatMoney(row.GrossInterest)}";
        if (withholdTax)
        {
            text += $" | Данък: {FormatMoney(row.Tax)}";
        }
        return text + $" | Крайна сума: {FormatMoney(row.EndAmount)}";
    }

    private static string FormatMoney(double amount) =>
        amount.ToString("F2", CultureInfo.InvariantCulture) + " лв.";
}
