#include <iostream>
using namespace std;

int main()
{
    unsigned long long fact = 1;
    
    int i = 1;

    while (true)
    {
        fact *= i;
        
        cout << i << "! = " << fact << endl;
        
        i++;

        if (fact == 0)
        {
            break;
        }
    }

    cout << "Prepulvane na i = " << i - 1 << endl;
    return 0;
}