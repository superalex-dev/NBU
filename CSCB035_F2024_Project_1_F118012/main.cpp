#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
    int n = 4;
    int result[100];
    int size;

    cout << "Sum of divisors of 28: " << sumOfDivisors(28) << endl;

    cout << "Divisors of 28: ";
    displayDivisors(28);

    intersectionOfDivisors(28, 496, result, size);
    cout << "Intersection of divisors of 28 and 496: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    unionOfPrimeDivisors(28, 496, result, size);
    cout << "Union of prime divisors of 28 and 496: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    if (isPerfect(28))
    {
        cout << "Is 28 perfect? Yes" << endl;
    }
    else
    {
        cout << "Is 28 perfect? No" << endl;
    }

    cout << "Perfect numbers in interval 1 to 10000: ";
    displayPerfectNumbersInInterval(1, 10000);

    cout << "First 4 perfect numbers: ";
    displayFirstNPerfectNumbers(4);

    storePerfectNumbersInInterval(1, 10000, result, size);
    cout << "Perfect numbers in interval 1 to 10000 stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    storeFirstNPerfectNumbers(4, result, size);
    cout << "First 4 perfect numbers stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    string representations[4];
    storePerfectNumberRepresentations(4, representations);
    cout << "Representations of first 4 perfect numbers:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << representations[i] << endl;
    }
    cout << endl;

    cout << "Invalid inputs:" << endl;

    cout << "Sum of divisors of -1: " << sumOfDivisors(-1) << endl;

    cout << "Divisors of -1: ";
    displayDivisors(-1);

    intersectionOfDivisors(-28, 496, result, size);
    cout << "Intersection of divisors of -28 and 496: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    unionOfPrimeDivisors(-28, 496, result, size);
    cout << "Union of prime divisors of -28 and 496: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << "Is -28 perfect? " << (isPerfect(-28) ? "Yes" : "No") << endl;

    cout << "Perfect numbers in interval -10 to 10000: ";
    displayPerfectNumbersInInterval(-10, 10000);

    cout << "First -4 perfect numbers: ";
    displayFirstNPerfectNumbers(-4);

    storePerfectNumbersInInterval(-1, 10000, result, size);
    cout << "Perfect numbers in interval -1 to 10000 stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    storeFirstNPerfectNumbers(-4, result, size);
    cout << "First -4 perfect numbers stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    storePerfectNumberRepresentations(-4, representations);
    cout << "Representations of first -4 perfect numbers:" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << representations[i] << endl;
    }
    cout << endl;

    return 0;
}