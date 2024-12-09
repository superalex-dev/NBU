#include <iostream>

using namespace std;

int main()
{
    // Declare and read the value of a
    int a;
    // Declare and read the value of b
    int b;
    // Declare and read the value of c
    int c;

    cin >> a >> b >> c;

    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100)
    {
        cout << "Invalid input data!" << endl;
        return 0;
    }
    
    int s = 1;
    int t = 0;
    int s1 = 0;
    int t1 = 1;

    while (b != 0)
    {
        int q = a / b;
        int temp = b;
        b = a % b;
        a = temp;

        temp = s1;
        s1 = s - q * s1;
        s = temp;

        temp = t1;
        t1 = t - q * t1;
        t = temp;
    }

    int gcd = a;

    if (c % gcd != 0)
    {
        cout << "No solution!" << endl;
        return 0;
    }
    
    int scale = c / gcd;
    // Declare variable x and save the coefficient before a in it
    int x = s * scale;
    // Declare variable y and save the coefficient before b in it
    int y = t * scale;

    cout << x << endl;
    cout << y << endl;

    return 0;
}