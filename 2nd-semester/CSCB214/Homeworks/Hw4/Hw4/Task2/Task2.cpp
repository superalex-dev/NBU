#include <iostream>
using namespace std;

// int main()
// {
//     int n, sum = 0;
//     
//     cout << "Enter n: ";
//     cin >> n;
//
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//
//     cout << "Sum of i = " << sum << endl;
//     
//     return 0;
// }


// int main()
// {
//     int n, sum = 0;
//     
//     cout << "Enter n: ";
//     cin >> n;
//
//     for (int i = 1; i <= n; i++)
//     {
//         sum += i * i;
//     }
//
//     cout << "Sum of i*i = " << sum << endl;
//     
//     return 0;
// }


int main()
{
    int n;
    double sum = 0.0;
    
    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }

    cout << "Sum of 1/i = " << sum << endl;
    
    return 0;
}