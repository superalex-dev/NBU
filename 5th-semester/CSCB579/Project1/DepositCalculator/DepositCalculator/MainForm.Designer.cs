namespace DepositCalculator;

partial class MainForm
{
    private System.ComponentModel.IContainer components = null;

    protected override void Dispose(bool disposing)
    {
        if (disposing && (components != null))
        {
            components.Dispose();
        }
        base.Dispose(disposing);
    }

    #region Windows Form Designer generated code

    private void InitializeComponent()
    {
        lblAmount = new Label();
        txtAmount = new TextBox();
        lblRate = new Label();
        txtRate = new TextBox();
        lblYears = new Label();
        txtYears = new TextBox();
        grpInterestType = new GroupBox();
        rbSimple = new RadioButton();
        rbCompound = new RadioButton();
        chkTax = new CheckBox();
        btnGenerate = new Button();
        lstPlan = new ListBox();
        lblFinalAmountCaption = new Label();
        lblFinalAmount = new Label();
        lblTotalProfitCaption = new Label();
        lblTotalProfit = new Label();
        grpInterestType.SuspendLayout();
        SuspendLayout();
        lblAmount.AutoSize = true;
        lblAmount.Location = new Point(12, 19);
        lblAmount.Name = "lblAmount";
        lblAmount.Size = new Size(115, 15);
        lblAmount.TabIndex = 0;
        lblAmount.Text = "Начална сума (лв.):";
        txtAmount.Location = new Point(210, 16);
        txtAmount.Name = "txtAmount";
        txtAmount.Size = new Size(160, 23);
        txtAmount.TabIndex = 1;
        lblRate.AutoSize = true;
        lblRate.Location = new Point(12, 53);
        lblRate.Name = "lblRate";
        lblRate.Size = new Size(165, 15);
        lblRate.TabIndex = 2;
        lblRate.Text = "Годишен лихвен процент (%):";
        txtRate.Location = new Point(210, 50);
        txtRate.Name = "txtRate";
        txtRate.Size = new Size(160, 23);
        txtRate.TabIndex = 3;
        lblYears.AutoSize = true;
        lblYears.Location = new Point(12, 87);
        lblYears.Name = "lblYears";
        lblYears.Size = new Size(155, 15);
        lblYears.TabIndex = 4;
        lblYears.Text = "Срок в години (от 1 до 30):";
        txtYears.Location = new Point(210, 84);
        txtYears.Name = "txtYears";
        txtYears.Size = new Size(160, 23);
        txtYears.TabIndex = 5;
        grpInterestType.Controls.Add(rbSimple);
        grpInterestType.Controls.Add(rbCompound);
        grpInterestType.Location = new Point(390, 8);
        grpInterestType.Name = "grpInterestType";
        grpInterestType.Size = new Size(358, 102);
        grpInterestType.TabIndex = 6;
        grpInterestType.TabStop = false;
        grpInterestType.Text = "Вид олихвяване";
        rbSimple.AutoSize = true;
        rbSimple.Checked = true;
        rbSimple.Location = new Point(16, 30);
        rbSimple.Name = "rbSimple";
        rbSimple.Size = new Size(250, 19);
        rbSimple.TabIndex = 0;
        rbSimple.TabStop = true;
        rbSimple.Text = "Проста лихва (само върху началната сума)";
        rbSimple.UseVisualStyleBackColor = true;
        rbCompound.AutoSize = true;
        rbCompound.Location = new Point(16, 64);
        rbCompound.Name = "rbCompound";
        rbCompound.Size = new Size(275, 19);
        rbCompound.TabIndex = 1;
        rbCompound.Text = "Сложна лихва (капитализира се всяка година)";
        rbCompound.UseVisualStyleBackColor = true;
        chkTax.AutoSize = true;
        chkTax.Location = new Point(12, 126);
        chkTax.Name = "chkTax";
        chkTax.Size = new Size(330, 19);
        chkTax.TabIndex = 7;
        chkTax.Text = "Удържай 8% данък върху лихвата в края на всяка година";
        chkTax.UseVisualStyleBackColor = true;
        btnGenerate.Location = new Point(12, 158);
        btnGenerate.Name = "btnGenerate";
        btnGenerate.Size = new Size(170, 32);
        btnGenerate.TabIndex = 8;
        btnGenerate.Text = "Генерирай план";
        btnGenerate.UseVisualStyleBackColor = true;
        btnGenerate.Click += btnGenerate_Click;
        lstPlan.FormattingEnabled = true;
        lstPlan.HorizontalScrollbar = true;
        lstPlan.ItemHeight = 15;
        lstPlan.Location = new Point(12, 204);
        lstPlan.Name = "lstPlan";
        lstPlan.Size = new Size(736, 229);
        lstPlan.TabIndex = 9;
        lblFinalAmountCaption.AutoSize = true;
        lblFinalAmountCaption.Location = new Point(12, 448);
        lblFinalAmountCaption.Name = "lblFinalAmountCaption";
        lblFinalAmountCaption.Size = new Size(180, 15);
        lblFinalAmountCaption.TabIndex = 10;
        lblFinalAmountCaption.Text = "Крайна сума в края на периода:";
        lblFinalAmount.AutoSize = true;
        lblFinalAmount.Font = new Font("Segoe UI", 9F, FontStyle.Bold);
        lblFinalAmount.Location = new Point(230, 448);
        lblFinalAmount.Name = "lblFinalAmount";
        lblFinalAmount.Size = new Size(14, 15);
        lblFinalAmount.TabIndex = 11;
        lblFinalAmount.Text = "—";
        lblTotalProfitCaption.AutoSize = true;
        lblTotalProfitCaption.Location = new Point(12, 476);
        lblTotalProfitCaption.Name = "lblTotalProfitCaption";
        lblTotalProfitCaption.Size = new Size(170, 15);
        lblTotalProfitCaption.TabIndex = 12;
        lblTotalProfitCaption.Text = "Обща чиста печалба от лихви:";
        lblTotalProfit.AutoSize = true;
        lblTotalProfit.Font = new Font("Segoe UI", 9F, FontStyle.Bold);
        lblTotalProfit.Location = new Point(230, 476);
        lblTotalProfit.Name = "lblTotalProfit";
        lblTotalProfit.Size = new Size(14, 15);
        lblTotalProfit.TabIndex = 13;
        lblTotalProfit.Text = "—";
        AcceptButton = btnGenerate;
        AutoScaleDimensions = new SizeF(7F, 15F);
        AutoScaleMode = AutoScaleMode.Font;
        ClientSize = new Size(760, 510);
        Controls.Add(lblAmount);
        Controls.Add(txtAmount);
        Controls.Add(lblRate);
        Controls.Add(txtRate);
        Controls.Add(lblYears);
        Controls.Add(txtYears);
        Controls.Add(grpInterestType);
        Controls.Add(chkTax);
        Controls.Add(btnGenerate);
        Controls.Add(lstPlan);
        Controls.Add(lblFinalAmountCaption);
        Controls.Add(lblFinalAmount);
        Controls.Add(lblTotalProfitCaption);
        Controls.Add(lblTotalProfit);
        FormBorderStyle = FormBorderStyle.FixedSingle;
        MaximizeBox = false;
        Name = "MainForm";
        StartPosition = FormStartPosition.CenterScreen;
        Text = "Депозитен калкулатор";
        grpInterestType.ResumeLayout(false);
        grpInterestType.PerformLayout();
        ResumeLayout(false);
        PerformLayout();
    }

    #endregion

    private Label lblAmount;
    private TextBox txtAmount;
    private Label lblRate;
    private TextBox txtRate;
    private Label lblYears;
    private TextBox txtYears;
    private GroupBox grpInterestType;
    private RadioButton rbSimple;
    private RadioButton rbCompound;
    private CheckBox chkTax;
    private Button btnGenerate;
    private ListBox lstPlan;
    private Label lblFinalAmountCaption;
    private Label lblFinalAmount;
    private Label lblTotalProfitCaption;
    private Label lblTotalProfit;
}
