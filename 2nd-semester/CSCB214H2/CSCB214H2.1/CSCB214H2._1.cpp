#include <iostream>
using namespace std;

int main() {
    const int base = 10;
    char num1[100], num2[100];
    int result[101] = {0};
    int carry = 0, index = 0;

    cout << "Input first num: ";
    cin >> num1;
    
    cout << "Input second num: ";
    cin >> num2;

    int len1 = 0;
    while (num1[len1] != '\0') len1++;
    
    int len2 = 0;
    while (num2[len2] != '\0') len2++;

    while (len1 > 0 || len2 > 0 || carry != 0)
    {
        int digit1 = 0;
        
        if (len1 > 0)
        {
            digit1 = num1[--len1] - '0';
        }
        
        int digit2 = 0;
        
        if (len2 > 0)
        {
            digit2 = num2[--len2] - '0';
        }
        
        int sum = digit1 + digit2 + carry;

        result[index++] = sum % base;
        carry = sum / base;
    }

    cout << "Sum: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;

    return 0;
}