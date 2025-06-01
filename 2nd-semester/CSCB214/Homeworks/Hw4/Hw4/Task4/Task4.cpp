#include <iostream>
using namespace std;

int main()
{
    double pi = 0.0;
    int sign = 1;

    for (int i = 0; i < 10000; i++)
    {
        pi += sign * 4.0 / (2 * i + 1);
        
        sign *= -1;

        if (i % 100 == 0)
        {
            cout << "Sled " << i << " iteracii: pi priblizitelno " << pi << endl;
        }
    }

    return 0;
}