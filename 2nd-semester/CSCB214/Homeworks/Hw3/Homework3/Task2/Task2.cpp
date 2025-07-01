#include <iostream>
using namespace std;

int main()
{
    const int n = 5;
    int c[n + 1];
    int prenos = 0;

    for (int k = 0; k < n; k++) 
    {
        const int b[n] = {1, 0, 0, 0, 0};
        const int a[n] = {9, 9, 9, 9, 9};
        
        const int sum = a[k] + b[k] + prenos;
        
        c[k] = sum % 10;
        prenos = sum / 10;
    }

    c[n] = prenos;

    cout << "Сума: ";
    
    if (c[n] != 0)
    {
        cout << c[n];
    }
    
    for (int k = n - 1; k >= 0; k--)
    {
        cout << c[k];
    }
    cout << endl;

    return 0;
}