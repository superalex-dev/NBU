#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double pi = 0.0;
    double term;
    
    int i = 0;
    int sign = 1;

    do
    {
        term = sign * 4.0 / (2 * i + 1);
        
        pi += term;
        sign *= -1;
        
        i++;
    } while (fabs(term) >= 0.0001);

    cout << "pi priblizitelno " << pi << " sled " << i << " chlena." << endl;
    return 0;
}