#include <iostream>
#include <cmath>
#include <string>

using namespace std;

bool isPrime(long long number) {
    if (number < 2) return false;
    for (long long i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

long long sumOfDivisors(long long number) {
    long long sum = 1;
    for (long long i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            sum += i;
            if (i != number / i) {
                sum += number / i;
            }
        }
    }
    return sum;
}

void printDivisors(long long number) {
    cout << "Divisors of " << number << ": 1";
    for (long long i = 2; i <= sqrt(number); ++i) {
        if (number % i == 0) {
            cout << ", " << i;
            if (i != number / i) {
                cout << ", " << number / i;
            }
        }
    }
    cout << endl;
}

bool isPerfectNumber(long long number) {
    return sumOfDivisors(number) == number;
}

int getPerfectNumbersInRange(long long start, long long end, long long* result, int maxSize) {
    int count = 0;
    for (long long num = start; num <= end && count < maxSize; ++num) {
        if (isPerfectNumber(num)) {
            result[count++] = num;
        }
    }
    return count;
}

int getFirstNPerfectNumbers(int n, long long* result, int maxSize) {
    int count = 0;
    int p = 2;
    while (count < n && count < maxSize) {
        if (isPrime((1LL << p) - 1)) {
            result[count++] = (1LL << (p - 1)) * ((1LL << p) - 1);
        }
        ++p;
    }
    return count;
}

int getPerfectNumbersRepresentation(int n, string result[], int maxSize) {
    int count = 0;
    int p = 2;
    while (count < n && count < maxSize) {
        if (isPrime((1LL << p) - 1)) {
            result[count] = "2^(" + to_string(p) + "-1).(2^" + to_string(p) + "-1)";
            ++count;
        }
        p++;
    }
    return count;
}

int main()
{
    long long number = 28;
    cout << "Sum of divisors (excluding the number itself) of " << number << " is: " << sumOfDivisors(number) << endl;

    cout << "Divisors of " << number << ":" << endl;
    printDivisors(number);

    if (isPerfectNumber(number)) {
        cout << number << " is a perfect number." << endl;
    }
    else {
        cout << number << " is not a perfect number." << endl;
    }

    long long start = 1, end = 10000;
    long long perfectNumbersInRange[10];
    int count = getPerfectNumbersInRange(start, end, perfectNumbersInRange, 10);
    cout << "Perfect numbers in range [" << start << ", " << end << "]:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << perfectNumbersInRange[i] << " ";
    }
    cout << endl;

    int n = 4;
    long long firstNPerfectNumbers[4];
    count = getFirstNPerfectNumbers(n, firstNPerfectNumbers, 4);
    cout << "First " << n << " perfect numbers:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << firstNPerfectNumbers[i] << " ";
    }
    cout << endl;

    string perfectNumberRepresentations[4];
    count = getPerfectNumbersRepresentation(n, perfectNumberRepresentations, 4);
    cout << "Representations of the first " << n << " perfect numbers:" << endl;
    for (int i = 0; i < count; ++i) {
        cout << perfectNumberRepresentations[i] << endl;
    }

    return 0;
}