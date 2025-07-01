#include <iostream>

using namespace std;

static int raiseToPower(const int base, const int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}


int main()
{
    int number, power;
    cin >> number >> power;

    int result = raiseToPower(number, power);
    cout << result << endl;

    return 0;
}