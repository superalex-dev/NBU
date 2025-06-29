#include <iostream>
using namespace std;

int main()
{
    const char masiv[] = {'0','1','1','1','2','8','B','e','o','v'};

    const int n = std::size(masiv);

    const char tarseni[] = {'9', '8', '7', 'q', 'y', 'ъ', 'o'};

    for (int t = 0; t < std::size(tarseni); t++)
    {
        const char target = tarseni[t];
        
        int nachalo = 0, krai = n - 1;
        
        int proverki = 0;
        
        bool nameren = false;

        cout << "\nTarsq '" << target << "' v naradeni danni:" << endl;

        while (nachalo <= krai)
        {
            proverki++;

            const int sreda = (nachalo + krai) / 2;

            cout << "Proverka " << proverki << ": Ti " << masiv[sreda] << " li si?"
                 << "  (nachalo=" << nachalo << ", krai=" << krai << ", sreda=" << sreda << ")" << endl;

            if (masiv[sreda] == target)
            {
                nameren = true;
                
                break;
            }
            if (masiv[sreda] < target)
            {
                nachalo = sreda + 1;
            }
            else
            {
                krai = sreda - 1;
            }
        }

        cout << "RezulTat: '" << target << "' " << (nameren ? "nameren" : "ne e nameren")
             << ", proverki: " << proverki << endl;
    }

    return 0;
}