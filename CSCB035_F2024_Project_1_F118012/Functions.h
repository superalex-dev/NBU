#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

using namespace std;


unsigned long long sumOfDivisors(unsigned long long n);

void displayDivisors(unsigned long long n);

void intersectionOfDivisors(unsigned long long a, unsigned long long b, unsigned long long* result, int& size);

void unionOfPrimeDivisors(unsigned long long a, unsigned long long b, unsigned long long* result, int& size);

bool isPerfect(unsigned long long n);

void displayPerfectNumbersInInterval(unsigned long long start, unsigned long long end);

void displayFirstNPerfectNumbers(int n);

void storePerfectNumbersInInterval(unsigned long long start, unsigned long long end, unsigned long long* result, int& size);

void storeFirstNPerfectNumbers(int n, unsigned long long* result, int& size);

void storePerfectNumberRepresentations(int n, string* result);

bool isPrime(unsigned long long n);

#endif