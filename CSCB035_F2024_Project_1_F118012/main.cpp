#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    unsigned long long result[100];
    int size;

    // Test sumOfDivisors
    cout << "Enter a number to test for perfect number properties: ";
    unsigned long long num;
    cin >> num;

    cout << "Sum of divisors: " << sumOfDivisors(num) << endl;
    cout << "Divisors: ";
    displayDivisors(num);
    if (isPerfect(num))
    {
        cout << "Yes, it is a perfect number." << endl;
    }
    else
    {
        cout << "No, it is not a perfect number." << endl;
    }

    cout << endl;

    // Test intersectionOfDivisors
    cout << "Enter two numbers to test intersection and union of divisors: ";
    unsigned long long num1, num2;
    cin >> num1 >> num2;

    cout << "Intersection of divisors of " << num1 << " and " << num2 << ": ";
    intersectionOfDivisors(num1, num2, result, size);
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;

    // Test unionOfPrimeDivisors
    cout << "Union of prime divisors of " << num1 << " and " << num2 << ": ";
    unionOfPrimeDivisors(num1, num2, result, size);
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;

    // Test displayPerfectNumbersInInterval
    cout << "Enter the start and end of an interval to find perfect numbers: ";
    unsigned long long start, end;
    cin >> start >> end;

    cout << "Perfect numbers in interval [" << start << ", " << end << "]: ";
    displayPerfectNumbersInInterval(start, end);

    cout << endl;

    // Test displayFirstNPerfectNumbers
    cout << "Enter the number of perfect numbers to display: ";
    int n;
    cin >> n;

    cout << "First " << n << " perfect numbers: ";
    displayFirstNPerfectNumbers(n);

    cout << endl;

    // Test storeFirstNPerfectNumbers
    storeFirstNPerfectNumbers(n, result, size);
    cout << "First " << n << " perfect numbers stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;

    // Test storePerfectNumberRepresentations
    string* representations = new string[n];
    storePerfectNumberRepresentations(n, representations);
    cout << "Representations of first " << n << " perfect numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << representations[i] << endl;
    }
    delete[] representations;

    cout << endl;

    // Test storePerfectNumbersInInterval
    storePerfectNumbersInInterval(start, end, result, size);
    cout << "Perfect numbers in interval [" << start << ", " << end << "] stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;

    // Test isPerfect
    cout << "Enter a number to check if it is perfect: ";
    cin >> num;
    if (isPerfect(num))
    {
        cout << "Yes, it is a perfect number." << endl;
    }
    else
    {
        cout << "No, it is not a perfect number." << endl;
    }

    cout << endl;

    // Test isMersennePrime
    cout << "Enter a number to check if it is a Mersenne prime: ";
    cin >> num;
    if (isMersennePrime(num))
    {
        cout << "Yes, it is a Mersenne prime." << endl;
    }
    else
    {
        cout << "No, it is not a Mersenne prime." << endl;
    }

    cout << endl;

    return 0;
}