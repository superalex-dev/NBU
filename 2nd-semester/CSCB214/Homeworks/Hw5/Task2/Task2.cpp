#include <iostream>
#include <cmath>

using namespace std;

static double degreesToRadians(const double degrees)
{
    return degrees * 3.141592653589793 / 180.0;
}

static void sinFactorial()
{
    double degrees;
    
    cout << "Enter angle in degrees (factorial method): ";
    cin >> degrees;

    const double x = degreesToRadians(degrees);
    
    double sum = x;
    
    double term = x;
    
    int n = 1;
    
    long long factorial = 1;
    
    int sign = -1;

    while (true)
    {
        factorial *= (2 * n) * (2 * n + 1);
        
        if (factorial < 0)
        {
            cout << "Overflow at term " << n << ", last valid sum: " << sum << endl;
            break;
        }
        
        term = (sign * pow(x, 2 * n + 1)) / factorial;
        
        sum += term;
        
        sign *= -1;
        
        n++;
    }

    cout << "sin(" << degrees << ") = " << sum << " (using factorial)" << endl;
}

static void sinPrecision()
{
    double degrees;
    
    cout << "Enter angle in degrees (precision method): ";
    cin >> degrees;

    const double x = degreesToRadians(degrees);
    
    double term = x;
    
    double sum = term;
    
    int n = 1;
    
    int sign = -1;
    
    int iterations = 1;

    while ((term >= 0 ? term : -term) >= 0.0001)
    {
        term *= x * x / ((2 * n) * (2 * n + 1));
        
        sum += sign * term;
        
        sign *= -1;
        
        n++;
        
        iterations++;
    }

    cout << "sin(" << degrees << ") = " << sum << " (precision 0.0001), iterations: " << iterations << endl;
}

int main()
{
    sinFactorial();
    
    sinPrecision();
    
    return 0;
}