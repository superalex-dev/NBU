#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    start:
        i = i + 1;
    if (i < 0)
        goto overflow;
    goto start;

    overflow:
        cout << "Olele, prepalnih, i = " << i << endl;
    return 0;
}