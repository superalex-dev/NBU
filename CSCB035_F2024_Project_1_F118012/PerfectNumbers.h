#ifndef PERFECT_NUMBERS_H
#define PERFECT_NUMBERS_H

int sumOfDivisors(int number);
void showDivisors(int number);
int intersectionOfDivisors(int num1, int num2, int result[]);
int unionOfPrimeDivisors(int num1, int num2, int result[]);
bool isPerfectNumber(int number);
void showPerfectNumbersInRange(int start, int end);
void showFirstNPerfectNumbers(int n);
int savePerfectNumbersInRange(int start, int end, int result[]);
int saveFirstNPerfectNumbersUsingMersenne(int n, int result[]);
int savePerfectNumbersRepresentation(int n, char result[][50]);

#endif
