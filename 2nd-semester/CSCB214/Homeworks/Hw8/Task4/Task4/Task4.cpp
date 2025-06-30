#include <iostream>

using namespace std;

int main()
{
    const int n = 6;
    int a[n];

    cout << "Vuvedi " << n << " chisla:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i + 1 << "] = ";
        cin >> a[i];
    }

    int pass = 0;
    int totalSwaps = 0;

    while (true)
    {
        int swapCount = 0;

        for (int i = 0; i < n - pass - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swapCount++;
            }
        }

        totalSwaps += swapCount;
        pass++;

        if (swapCount == 0)
        {
            break;
        }
    }

    cout << endl << "Sortiran masiv:" << endl;
    
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Broi obikalki: " << pass << endl;
    cout << "Obsht broi razmeni (inversii): " << totalSwaps << endl;

    return 0;
}