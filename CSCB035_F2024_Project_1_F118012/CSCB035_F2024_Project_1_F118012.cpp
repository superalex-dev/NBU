#include "Functions.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int sumOfDivisors(int n)
{
    if (n <= 0 || n > 9223372036854775807LL)
    {
        cout << "Error: Input must be a positive integer in the range [1; 2^63-1]." << endl;
        return 0;
    }

    int sum = 0;

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

void displayDivisors(int n)
{
    if (n <= 0 || n > 9223372036854775807LL)
    {
        cout << "Error: Input must be a positive integer in the range [1; 2^63-1]." << endl;
        return;
    }

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n <= 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void intersectionOfDivisors(int a, int b, int* result, int& size)
{
    if (a <= 0 || b <= 0 || a > 9223372036854775807LL || b > 9223372036854775807LL)
    {
        cout << "Error: Inputs must be positive integers in the range [1; 2^63-1]." << endl;
        size = 0;
        return;
    }

    if (result == nullptr)
    {
        cout << "Error: Result array is null." << endl;
        size = 0;
        return;
    }

    size = 0;

    for (int i = 1; i <= min(a, b) / 2; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            result[size++] = i;
        }
    }
}

void unionOfPrimeDivisors(int a, int b, int* result, int& size)
{
    if (a <= 0 || b <= 0 || a > 9223372036854775807LL || b > 9223372036854775807LL)
    {
        cout << "Error: Inputs must be positive integers in the range [1; 2^63-1]." << endl;
        size = 0;
        return;
    }

    if (result == nullptr)
    {
        cout << "Error: Result array is null." << endl;
        size = 0;
        return;
    }

    bool primes[1000] = { false };

    size = 0;

    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0 && isPrime(i))
        {
            primes[i] = true;
        }
    }

    for (int i = 2; i <= b; i++)
    {
        if (b % i == 0 && isPrime(i))
        {
            primes[i] = true;
        }
    }

    for (int i = 2; i < 1000; i++)
    {
        if (primes[i])
        {
            result[size++] = i;
        }
    }
}

bool isPerfect(int n)
{
    if (n <= 0 || n > 9223372036854775807LL)
    {
        cout << "Error: Input must be a positive integer in the range [1; 2^63-1]." << endl;
        return false;
    }

    return sumOfDivisors(n) == n;
}

void displayPerfectNumbersInInterval(int start, int end)
{
    if (start <= 0 || end <= 0 || start > end || end > 9223372036854775807LL)
    {
        cout << "Error: Invalid interval. Start and end must be positive integers in the range [1; 2^63-1] and start <= end." << endl;
        return;
    }

    for (int i = start; i <= end; i++)
    {
        if (isPerfect(i))
        {
            cout << i << " ";
        }
    }

    cout << endl;
}

void displayFirstNPerfectNumbers(int n)
{
    if (n <= 0)
    {
        cout << "Error: Input must be a positive integer." << endl;
        return;
    }

    int count = 0;

    int p = 2;

    while (count < n)
    {
        long long mersennePrime = (1LL << p) - 1;

        if (isPrime(mersennePrime))
        {
            long long perfectNumber = (1LL << (p - 1)) * mersennePrime;
            cout << perfectNumber << " ";
            count++;
        }
        p++;
    }

    cout << endl;
}

void storePerfectNumbersInInterval(int start, int end, int* result, int& size)
{
    if (start <= 0 || end <= 0 || start > end || end > 9223372036854775807LL)
    {
        cout << "Error: Invalid interval. Start and end must be positive integers in the range [1; 2^63-1] and start <= end." << endl;
        size = 0;
        return;
    }

    if (result == nullptr)
    {
        cout << "Error: Result array is null." << endl;
        size = 0;
        return;
    }

    size = 0;

    for (int i = start; i <= end; i++)
    {
        if (isPerfect(i))
        {
            result[size++] = i;
        }
    }
}

void storeFirstNPerfectNumbers(int n, int* result, int& size)
{
    if (n <= 0)
    {
        cout << "Error: Input must be a positive integer." << endl;
        size = 0;
        return;
    }

    if (result == nullptr)
    {
        cout << "Error: Result array is null." << endl;
        size = 0;
        return;
    }

    size = 0;

    int count = 0;

    int p = 2;

    while (count < n)
    {
        long long mersennePrime = (1LL << p) - 1;

        if (isPrime(mersennePrime))
        {
            long long perfectNumber = (1LL << (p - 1)) * mersennePrime;
            result[size++] = perfectNumber;
            count++;
        }

        p++;
    }
}

void storePerfectNumberRepresentations(int n, string* result)
{
    if (n <= 0)
    {
        cout << "Error: Input must be a positive integer." << endl;
        return;
    }

    if (result == nullptr)
    {
        cout << "Error: Result array is null." << endl;
        return;
    }

    int count = 0;

    int p = 2;

    while (count < n)
    {
        long long mersennePrime = (1LL << p) - 1;

        if (isPrime(mersennePrime))
        {
            result[count] = "2^(" + to_string(p - 1) + ").(2^" + to_string(p) + "-1)";
            count++;
        }

        p++;
    }
}