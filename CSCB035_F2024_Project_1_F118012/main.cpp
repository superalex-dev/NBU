#include <iostream>
#include "Functions.h"

using namespace std;

void testSumOfDivisors()
{
    cout << "Enter a number to test for perfect number properties: ";
    unsigned long long num;
    cin >> num;

    cout << endl;

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
}

void testIntersectionOfDivisors()
{
    cout << "Enter two numbers to test intersection of divisors: ";
    unsigned long long num1, num2;
    cin >> num1 >> num2;

    cout << endl;

    unsigned long long result[100];
    int size;

    cout << "Intersection of divisors of " << num1 << " and " << num2 << ": ";
    intersectionOfDivisors(num1, num2, result, size);

    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;
}

void testUnionOfPrimeDivisors()
{
    cout << "Enter two numbers to test union of prime divisors: ";
    unsigned long long num1, num2;
    cin >> num1 >> num2;

    cout << endl;

    unsigned long long result[100];
    int size;

    cout << "Union of prime divisors of " << num1 << " and " << num2 << ": ";
    unionOfPrimeDivisors(num1, num2, result, size);

    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;
}

void testDisplayPerfectNumbersInInterval()
{
    cout << "Enter the start and end of an interval to find perfect numbers: ";
    unsigned long long start, end;
    cin >> start >> end;

    cout << endl;

    cout << "Perfect numbers in interval [" << start << ", " << end << "]: ";
    displayPerfectNumbersInInterval(start, end);
    cout << endl;

    cout << endl;
}

void testDisplayFirstNPerfectNumbers()
{
    cout << "Enter the number of perfect numbers to display: ";
    int n;
    cin >> n;

    cout << endl;

    cout << "First " << n << " perfect numbers: ";
    displayFirstNPerfectNumbers(n);
    cout << endl;

    cout << endl;
}

void testStoreFirstNPerfectNumbers()
{
    cout << "Enter the number of perfect numbers to store: ";
    int n;
    cin >> n;

    cout << endl;

    unsigned long long result[100];
    int size;

    storeFirstNPerfectNumbers(n, result, size);

    cout << "First " << n << " perfect numbers stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;
}

void testStorePerfectNumberRepresentations()
{
    cout << "Enter the number of perfect numbers to store representations: ";
    int n;
    cin >> n;

    cout << endl;

    string* representations = new string[n];
    storePerfectNumberRepresentations(n, representations);

    cout << "Representations of first " << n << " perfect numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << representations[i] << endl;
    }
    delete[] representations;

    cout << endl;
}

void testStorePerfectNumbersInInterval()
{
    cout << "Enter the start and end of an interval to store perfect numbers: ";
    unsigned long long start, end;
    cin >> start >> end;

    cout << endl;

    unsigned long long result[100];
    int size;

    storePerfectNumbersInInterval(start, end, result, size);

    cout << "Perfect numbers in interval [" << start << ", " << end << "] stored in array: ";
    for (int i = 0; i < size; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << endl;
}

void testIsPerfect()
{
    cout << "Enter a number to check if it is perfect: ";
    unsigned long long num;
    cin >> num;

    cout << endl;

    if (isPerfect(num))
    {
        cout << "Yes, it is a perfect number." << endl;
    }
    else
    {
        cout << "No, it is not a perfect number." << endl;
    }

    cout << endl;
}

void testIsMersennePrime()
{
    cout << "Enter a number to check if it is a Mersenne prime: ";
    unsigned long long num;
    cin >> num;

    cout << endl;

    if (isMersennePrime(num))
    {
        cout << "Yes, it is a Mersenne prime." << endl;
    }
    else
    {
        cout << "No, it is not a Mersenne prime." << endl;
    }

    cout << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "Choose a function to test:" << endl;
        cout << "1. Test sumOfDivisors" << endl;
        cout << "2. Test intersectionOfDivisors" << endl;
        cout << "3. Test unionOfPrimeDivisors" << endl;
        cout << "4. Test displayPerfectNumbersInInterval" << endl;
        cout << "5. Test displayFirstNPerfectNumbers" << endl;
        cout << "6. Test storeFirstNPerfectNumbers" << endl;
        cout << "7. Test storePerfectNumberRepresentations" << endl;
        cout << "8. Test storePerfectNumbersInInterval" << endl;
        cout << "9. Test isPerfect" << endl;
        cout << "10. Test isMersennePrime" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;

        switch (choice)
        {
        case 1:
            testSumOfDivisors();
            break;
        case 2:
            testIntersectionOfDivisors();
            break;
        case 3:
            testUnionOfPrimeDivisors();
            break;
        case 4:
            testDisplayPerfectNumbersInInterval();
            break;
        case 5:
            testDisplayFirstNPerfectNumbers();
            break;
        case 6:
            testStoreFirstNPerfectNumbers();
            break;
        case 7:
            testStorePerfectNumberRepresentations();
            break;
        case 8:
            testStorePerfectNumbersInInterval();
            break;
        case 9:
            testIsPerfect();
            break;
        case 10:
            testIsMersennePrime();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}