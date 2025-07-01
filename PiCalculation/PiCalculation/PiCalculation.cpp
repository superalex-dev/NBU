#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double tolerans;
    int maxIterations;

    cout << "Enter tolerans: ";
    cin >> tolerans;

    cout << "Enter max iterations: ";
    cin >> maxIterations;

    double sum = 0.0;
    double sign = 1.0;

    double previousPi = 0.0;
    double currentPi = 0.0;

    int iteration = 0;

    while ((iteration == 0 || abs(currentPi - previousPi) > tolerans) && iteration < maxIterations)
    {
        double term = 1.0 / (2.0 * iteration + 1.0);

        sum += term * sign;

        previousPi = currentPi;
        currentPi = 4 * sum;

        sign *= -1.0;

        iteration++;
    }

    if (iteration == maxIterations)
    {
        cout << "Reached maximum iterations" << endl;
    }
    else
    {
        cout << "Pi value is: " << currentPi << endl;
        cout << "Iterations: " << iteration << endl;
    }

    return 0;
}