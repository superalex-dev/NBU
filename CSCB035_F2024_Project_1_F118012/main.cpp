#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    unsigned long long result[100];
    int size;

    cout << "Testing with first few perfect numbers:" << endl;

    cout << endl;
    cout << "Testing with 6:" << endl;
    cout << "Sum of divisors: " << sumOfDivisors(6) << endl;
    cout << "Divisors: ";
    displayDivisors(6);
    if (isPerfect(6))
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }

    cout << endl;
    cout << "Testing with 28:" << endl;
    cout << "Sum of divisors: " << sumOfDivisors(28) << endl;
    cout << "Divisors: ";
    displayDivisors(28);
    if (isPerfect(6))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    cout << endl;
    cout << "Testing functions with pairs of numbers:" << endl;
    cout << "Intersection of divisors of 28 and 496: ";
    intersectionOfDivisors(28, 496, result, size);
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << "Union of prime divisors of 28 and 496: ";
    unionOfPrimeDivisors(28, 496, result, size);
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;
    cout << "Testing interval functions:" << endl;
    cout << "Perfect numbers in interval [1, 1000]: ";
    displayPerfectNumbersInInterval(1, 1000);

    cout << endl;
    cout << "Testing first N perfect numbers:" << endl;
    cout << "First 4 perfect numbers: ";
    displayFirstNPerfectNumbers(4);

    cout << endl;
    cout << "Testing first N perfect numbers:" << endl;
    storeFirstNPerfectNumbers(4, result, size);
    cout << "First 4 perfect numbers stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    string representations[4];
    storePerfectNumberRepresentations(4, representations);
    cout << endl;
    cout << "Representations of first 4 perfect numbers:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << representations[i] << endl;
    }

    cout << endl;
    cout << "Testing with the 8th perfect number:" << endl;
    cout << "First 8 perfect numbers: ";
    displayFirstNPerfectNumbers(8);

    cout << endl;
    cout << "Testing Validations to force invalid outputs";
    cout << endl;

    cout << endl;
    cout << "Test 1: Numbers close to 2^63-1";
    cout << endl;

    unsigned long long bigNum1 = 9223372036854775807ULL;
    unsigned long long bigNum2 = 9223372036854775806ULL;

    cout << "Testing sumOfDivisors with " << bigNum1 << ": ";
    sumOfDivisors(bigNum1);

    cout << "Testing intersectionOfDivisors with large numbers: ";
    intersectionOfDivisors(bigNum1, bigNum2, result, size);

    cout << endl;
    cout << "Test 2: Numbers close to 8th perfect number";
    cout << endl;

    unsigned long long perfectNum8 = 2305843008139952128ULL;
    unsigned long long nearPerfect = perfectNum8 - 1;

    cout << "Testing with 8th perfect number: ";
    displayDivisors(perfectNum8);

    cout << "Testing with number near 8th perfect: ";
    displayDivisors(nearPerfect);

    cout << endl;
    cout << "Test 3: Overflow in divisor calculations";
    cout << endl;
    unsigned long long halfMax = 9223372036854775807ULL / 2;
    cout << "Testing sumOfDivisors with " << halfMax << ": ";
    sumOfDivisors(halfMax);

    cout << endl;
    cout << "Test 4: Large intervals";
    cout << endl;
    cout << "Testing displayPerfectNumbersInInterval with large range: ";
    displayPerfectNumbersInInterval(perfectNum8 - 1000, perfectNum8);

    cout << endl;
    cout << "Test 5: Large N for first N perfect numbers";
    cout << endl;

    cout << "Testing displayFirstNPerfectNumbers with N = 10: ";
    displayFirstNPerfectNumbers(10);

    cout << endl;
    cout << "Test 6: Invalid inputs";
    cout << endl;

    cout << "Testing with negative number: ";
    sumOfDivisors(-1);

    cout << "Testing with zero: ";
    displayDivisors(0);

    cout << "Testing with number larger than 8th perfect number: ";
    isPerfect(perfectNum8 + 1);

    cout << endl;
    cout << "Test 7: Edge cases for Mersenne numbers";
    cout << endl;

    cout << "Testing storePerfectNumberRepresentations with N = 9: ";
    storePerfectNumberRepresentations(9, representations);

    return 0;
}