#include <iostream>
using namespace std;

int main()
{
    const int n = 10;
    
    int a[n];
    
    int sorted[n];

    cout << "enter " << n << " numbers:"<< endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        
        cin >> a[i];
    }

    for (int s = 0; s < n; s++)
    {
        int min = 99999;
        int flag = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < min)
            {
                min = a[i];
                flag = i;
            }
        }

        sorted[s] = min;
        a[flag] = 99999;
    }

    cout << endl << "Sled sortirane:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << sorted[i] << " ";
    }
    
    cout << endl;

    return 0;
}