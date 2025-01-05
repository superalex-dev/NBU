#include "Functions.h"
#include <cmath>
#include <cstring>

using namespace std;

int sumOfDivisors(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void displayDivisors(int n)
{
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
    return sumOfDivisors(n) == n;
}

void displayPerfectNumbersInInterval(int start, int end) 
{
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
    int count = 0;

    int p = 2;

    while (count < n) 
    {
        long long mersennePrime = (1LL << p) - 1; // 2^p - 1
        if (isPrime(mersennePrime)) 
        {
            long long perfectNumber = (1LL << (p - 1)) * mersennePrime; // 2^(p-1) * (2^p - 1)
            cout << perfectNumber << " ";
            count++;
        }
        p++;
    }
    cout << endl;
}

void storePerfectNumbersInInterval(int start, int end, int* result, int& size) 
{
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
    size = 0;

    int count = 0;

    int p = 2;

    while (count < n) 
    {
        long long mersennePrime = (1LL << p) - 1; // 2^p - 1
        if (isPrime(mersennePrime)) 
        {
            long long perfectNumber = (1LL << (p - 1)) * mersennePrime; // 2^(p-1) * (2^p - 1)
            result[size++] = perfectNumber;
            count++;
        }
        p++;
    }
}

void storePerfectNumberRepresentations(int n, string* result) 
{
    int count = 0;

    int p = 2;

    while (count < n) 
    {
        long long mersennePrime = (1LL << p) - 1; // 2^p - 1
        if (isPrime(mersennePrime)) 
        {
            result[count] = "2^(" + to_string(p - 1) + ").(2^" + to_string(p) + "-1)";
            count++;
        }
        p++;
    }
}