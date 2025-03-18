#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int temp;

    cout << "Inter 2 ints ";
    cin >> a >> b;

    start:
        if (b != 0) {
            temp = a % b;
            a = b;
            b = temp;
            goto start;
        }
    
    cout << "GCD:  " << a << endl;
    return 0;
}