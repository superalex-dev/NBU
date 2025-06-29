#include <iostream>
using namespace std;

int main()
{
    const char masiv[] = {'b', 'o', 'e', 'v'};

    const int razmer = std::size(masiv);

    for (int t = 0; t < 4; t++) {
        const char celi[] = {'a', 'b', 'v', 'g'};

        const char target = celi[t];
        
        bool found = false;
        
        int checks = 0;

        cout << "\nTarsq '" << target << "' v masiva:" << endl;

        for (int i = 0; i < razmer; i++)
        {
            checks++;
            
            cout << "Ti " << masiv[i] << " li si?" << endl;

            if (masiv[i] == target)
            {
                found = true;
                
                break;
            }
        }

        cout << "RezulTat: '" << target << "' "
             << (found ? "nameren" : "ne e nameren")
             << ", proverki: " << checks << endl;
    }

    return 0;
}