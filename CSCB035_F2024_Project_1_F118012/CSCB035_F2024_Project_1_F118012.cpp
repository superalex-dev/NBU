#include "Functions.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

unsigned long long sumOfDivisors(unsigned long long n) 
{
    if (n <= 0 || n > 2305843008139952128ULL) 
    {
        cout << "Input must be a positive integer in the range [1; 2305843008139952128]." << endl;

        return 0;
    }

    unsigned long long sum = 1;

    for (unsigned long long i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            sum += i;

            if (i * i != n) 
            {
                sum += n / i;
            }
        }
    }
    return sum;
}

void displayDivisors(unsigned long long n)
{
    if (n <= 0 || n > 2305843008139952128ULL)
    {
        cout << "Input must be a positive integer in the range [1; 2305843008139952128]." << endl;
        return;
    }

    unsigned long long divisors[1000];
    int count = 0;

    for (unsigned long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i != n)
            {
                divisors[count++] = i;
            }
            if (i * i != n && n / i != n)
            {
                divisors[count++] = n / i;
            }
        }
    }
    cout << endl;
}

bool isPrime(unsigned long long n) 
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

    for (unsigned long long i = 5; i * i <= n; i += 6) 
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }

    return true;
}

void intersectionOfDivisors(unsigned long long a, unsigned long long b, unsigned long long* result, int& size) 
{
    if (a <= 0 || b <= 0 || a > 2305843008139952128ULL || b > 2305843008139952128ULL) 
    {
        cout << "Inputs must be positive integers in the range [1; 2305843008139952128]." << endl;
        size = 0;

        return;
    }

    if (result == nullptr) 
    {
        cout << "Output array is null." << endl;
        size = 0;

        return;
    }

    size = 0;

    unsigned long long minNum = min(a, b);

    for (unsigned long long i = 1; i <= sqrt(minNum); i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            result[size++] = i;
            if (i * i != minNum) 
            {
                unsigned long long d = minNum / i;

                if (a % d == 0 && b % d == 0 && d != a && d != b) 
                {
                    result[size++] = d;
                }
            }
        }
    }
}

void unionOfPrimeDivisors(unsigned long long a, unsigned long long b, unsigned long long* result, int& size) 
{
    if (a <= 0 || b <= 0 || a > 2305843008139952128ULL || b > 2305843008139952128ULL) 
    {
        cout << "Inputs must be positive integers in the range [1; 2305843008139952128]." << endl;

        size = 0;

        return;
    }

    if (result == nullptr) 
    {
        cout << "Result array is null." << endl;

        size = 0;

        return;
    }

    size = 0;

    for (unsigned long long i = 2; i <= max(a, b); i++) 
    {
        if ((a % i == 0 || b % i == 0) && isPrime(i)) 
        {
            result[size++] = i;
        }
    }
}

bool isPerfect(unsigned long long n) 
{
    if (n <= 0 || n > 2305843008139952128ULL) 
    {
        cout << "Input must be a positive integer in the range [1; 2305843008139952128]." << endl;

        return false;
    }

    return sumOfDivisors(n) == n;
}

bool isMersennePrime(unsigned long long num)
{
    if (num < 2)
    {
        return false;
    }

    unsigned long long p = 1;
    
    while (true)
    {
        unsigned long long mersenne = (1ULL << p) - 1;
        if (mersenne == num)
        {
            return isPrime(p);
        }
        if (mersenne > num)
        {
            return false;
        }
        
        p++;
    }
}

void displayPerfectNumbersInInterval(unsigned long long start, unsigned long long end)
{
    if (start <= 0 || end <= 0 || start > end || end > 2305843008139952128ULL)
    {
        cout << "Invalid interval. Start and end must be positive integers and start <= end, and end should be lower than 2305843008139952128ULL" << endl;
        return;
    }

    cout << "Processing interval: [" << start << ", " << end << "]" << endl;

    for (unsigned long long i = start; i <= end; i++)
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
        cout << "Input must be a positive integer." << endl;
        return;
    }

    int count = 0;
    int p = 2;

    while (count < n) 
    {
        unsigned long long mersennePrime = (1ULL << p) - 1;
        if (isPrime(mersennePrime)) 
        {
            unsigned long long perfectNumber = (1ULL << (p - 1)) * mersennePrime;

            if (perfectNumber <= 2305843008139952128ULL) 
            {
                cout << perfectNumber << " ";
                count++;
            }
        }

        p++;
    }

    cout << endl;
}

void storePerfectNumbersInInterval(unsigned long long start, unsigned long long end, unsigned long long* result, int& size) 
{
    if (start <= 0 || end <= 0 || start > end || end > 2305843008139952128ULL) 
    {
        cout << "Invalid interval. Start and end must be positive integers and start <= end." << endl;

        size = 0;

        return;
    }

    if (result == nullptr) 
    {
        cout << "Result array is null." << endl;
        size = 0;

        return;
    }

    size = 0;

    for (unsigned long long i = start; i <= end; i++) 
    {
        if (isPerfect(i)) 
        {
            result[size++] = i;
        }
    }
}

void storeFirstNPerfectNumbers(int n, unsigned long long* result, int& size) 
{
    if (n <= 0) 
    {
        cout << "Input must be a positive integer." << endl;

        size = 0;

        return;
    }

    if (result == nullptr) 
    {
        cout << "Result array is null." << endl;

        size = 0;

        return;
    }

    size = 0;
    int p = 2;

    while (size < n) 
    {
        unsigned long long mersennePrime = (1ULL << p) - 1;
        if (isPrime(mersennePrime)) 
        {
            unsigned long long perfectNumber = (1ULL << (p - 1)) * mersennePrime;

            if (perfectNumber <= 2305843008139952128ULL) 
            {
                result[size++] = perfectNumber;
            }
        }

        p++;
    }
}

void storePerfectNumberRepresentations(int n, string* result)
{
    if (n <= 0)
    {
        cout << "Input must be a positive integer." << endl;
        return;
    }

    if (result == nullptr)
    {
        cout << "Result array is null." << endl;
        return;
    }

    int count = 0;
    int p = 2;

    while (count < n)
    {
        unsigned long long mersennePrime = (1ULL << p) - 1;

        if (isPrime(mersennePrime))
        {
            unsigned long long perfectNumber = (1ULL << (p - 1)) * mersennePrime;

            if (perfectNumber <= 2305843008139952128ULL)
            {
                result[count] = "2^(" + to_string(p - 1) + ").(2^" + to_string(p) + "-1)";
                count++;
            }
        }

        p++;
    }
}