namespace DepositCalculator;

public enum InterestType
{
    Simple,
    Compound
}

public sealed record YearResult(int Year, double StartAmount, double GrossInterest, double Tax, double EndAmount)
{
    public double NetInterest => GrossInterest - Tax;
}

public static class DepositPlanner
{
    public const double TaxRate = 0.08;

    public static List<YearResult> BuildPlan(double principal, double annualRatePercent, int years,
                                             InterestType interestType, bool withholdTax)
    {
        var plan = new List<YearResult>();

        principal = Round2(principal);
        double balance = principal;

        for (int year = 1; year <= years; year++)
        {
            double interestBase = interestType == InterestType.Simple ? principal : balance;

            double grossInterest = Round2(interestBase * annualRatePercent / 100);
            double tax = withholdTax ? Round2(grossInterest * TaxRate) : 0;
            double endAmount = Round2(balance + grossInterest - tax);

            plan.Add(new YearResult(year, balance, grossInterest, tax, endAmount));
            balance = endAmount;
        }

        return plan;
    }

    private static double Round2(double x) => Math.Round(x, 2, MidpointRounding.AwayFromZero);
}
