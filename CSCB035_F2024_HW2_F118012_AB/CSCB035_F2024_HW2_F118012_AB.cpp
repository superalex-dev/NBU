#include <iostream>
#include <cmath>

using namespace std;

int task1()
{
    int n;
    cin >> n;

    if (n < 2 || n > 2000)
    {
        cout << "Invalid input data!";
        return 0;
    }

    int result = 1;
    int temp = n;

    for (int i = 2; i <= sqrt(temp); i++)
    {
        int count = 0;

        while (temp % i == 0)
        {
            count++;
            temp /= i;
        }
        if (count > 0)
        {
            result *= (count + 1);
        }
    }

    if (temp > 1)
    {
        result *= 2;
    }

    cout << result;

    return 0;
}

int task2()
{
    // Declare and read the value of n
    int n;
    cin >> n;

    if (n < 2 || n > 2000)
    {
        cout << "Invalid input data!";
        return 0;
    }
    
    // Declare variable result and save the sum of the prime divisors of n in it
    int result = 0;
    int temp = n;

    for (int i = 2; i <= sqrt(temp); i++)
    {
        if (temp % i == 0)
        {
            result += i;
            while (temp % i == 0)
            {
                temp /= i;
            }
        }
    }

    if (temp > 1)
    {
        result += temp;
    }

    // Print result to the console
    cout << result;

    return 0;
}

int task3()
{
    // Declare and read the value of n
    int n;
    cin >> n;

    if (n < 2 || n > 2000)
    {
        cout << "Invalid input data!";
        return 0;
    }

    // Declare variable result and save the sum of the divisors of n, that are not prime
    int result = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            bool isPrime = true;
            
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (!isPrime)
            {
                result += i;
            }
        }
    }

    // Print result to the console
    cout << result;

    return 0;
}

int main()
{
    task1();
    // task2();
    // task3();
}
