#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fakNum;
    
    cout << "Vuvedete fakulteten nomer: ";
    cin  >> fakNum;

    if (fakNum.size() < 6)
    {
        cout << "Greshka! Fakultetniqt nomer tryabva da e pone 6 cifri!" << endl;
        return 1;
    }

    const int F4 = fakNum[3] - '0';
    const int F6 = fakNum[5] - '0'; 

    cout << "1) Broi ostatatsi po modul F[4]: " << F4 << endl;

    const int A = F4 * 10 + F6;
    cout << "2) A = " << A << ", A mod 11 = " << (A % 11) << endl;

    cout << "3) 7 mod A = " << (7 % A) << endl;

    cout << "4) 9 mod A = " << (9 % A) << endl;

    return 0;
}