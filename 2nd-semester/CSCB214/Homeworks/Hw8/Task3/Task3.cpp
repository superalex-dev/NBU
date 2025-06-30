#include <iostream>
using namespace std;

int main()
{
    const int n = 7;
    int arr[n];

    cout << "Vuvedi " << n << " chisla:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "] = ";
        cin >> arr[i];
    }

    int inversii = 0;
    int sravneniq = 0;

    cout << endl << "Inversii:" << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sravneniq++;
            
            if (arr[i] > arr[j])
            {
                cout << "(" << arr[i] << ", " << arr[j] << ") pri indexi [" << i << "," << j << "]" << endl;
                inversii++;
            }
        }
    }

    cout << endl << "Obsht broi inversii: " << inversii << endl;
    cout << "Obsht broi sravneniq: " << sravneniq << endl;

    return 0;
}