#include <iostream>
using namespace std;

int main()
{
    int n = 2;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    int gaussSum = n * (n + 1) / 2;

    cout << "Sum with loop: " << sum << endl;
    cout << "Sum with Gauss formula: " << gaussSum << endl;

    if (sum == gaussSum)
    {
        cout << "Formula is correct." << endl;
    }
    else
    {
        cout << "Formula is not correct." << endl;
    }

    return 0;
}