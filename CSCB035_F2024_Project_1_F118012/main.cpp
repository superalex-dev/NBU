#include <iostream>
#include "Functions.h"

using namespace std;

int main() {
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
    cout << "\nRepresentations of first 4 perfect numbers:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << representations[i] << endl;
    }

    cout << endl;
    cout << "Testing with the 8th perfect number:" << endl;
    cout << "First 8 perfect numbers: ";
    displayFirstNPerfectNumbers(8);

    return 0;
}