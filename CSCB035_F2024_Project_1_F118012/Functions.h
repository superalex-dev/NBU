#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <string>

using namespace std;

int sumOfDivisors(int n);

void displayDivisors(int n);

void intersectionOfDivisors(int a, int b, int* result, int& size);

void unionOfPrimeDivisors(int a, int b, int* result, int& size);

bool isPerfect(int n);

void displayPerfectNumbersInInterval(int start, int end);

void displayFirstNPerfectNumbers(int n);

void storePerfectNumbersInInterval(int start, int end, int* result, int& size);

void storeFirstNPerfectNumbers(int n, int* result, int& size);

void storePerfectNumberRepresentations(int n, string* result);

#endif