#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

long long sumOfDivisors(long long number);
void printDivisors(long long number);
int intersectionOfDivisors(long long num1, long long num2, long long* result, int maxSize);
int unionOfPrimeDivisors(long long num1, long long num2, long long* result, int maxSize);
bool isPerfectNumber(long long number);
int getPerfectNumbersInRange(long long start, long long end, long long* result, int maxSize);
int getFirstNPerfectNumbers(int n, long long* result, int maxSize);
int getPerfectNumbersRepresentation(int n, char result[][50], int maxSize);
bool isPrime(long long number);

#endif