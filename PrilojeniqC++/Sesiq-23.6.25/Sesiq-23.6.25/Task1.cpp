#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    const int maxNames = 100;
    
    const int maxLength = 21;
    
    char names[maxNames][maxLength];
    
    int nameCount = 0;

    while (nameCount < maxNames)
    {
        cin >> names[nameCount];

        if (names[nameCount][0] == '0' && names[nameCount][1] == '\0')
        {
            break;
        }

        nameCount++;
    }

    char startingLetter;
    
    cin >> startingLetter;

    startingLetter = tolower(startingLetter);

    for (int i = 0; i < nameCount; i++)
    {
        if (tolower(names[i][0]) == startingLetter)
        {
            cout << names[i] << " ";
        }
    }

    return 0;
}