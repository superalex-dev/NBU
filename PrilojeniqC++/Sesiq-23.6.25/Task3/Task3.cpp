#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char* inputBuffer = new char[1001];

    cin.getline(inputBuffer, 1000);

    int length = 0;
    
    while (inputBuffer[length] != '\0')
    {
        length++;
    }

    char* cleanBuffer = new char[length + 1];
    
    int cleanIndex = 0;

    for (int i = 0; i < length; i++)
    {
        if (isalpha(inputBuffer[i]) || isdigit(inputBuffer[i]) || inputBuffer[i] == ' ')
        {
            cleanBuffer[cleanIndex] = tolower(inputBuffer[i]);
            
            cleanIndex++;
        }
    }

    cleanBuffer[cleanIndex] = '\0';

    cout << cleanBuffer << endl;

    delete[] inputBuffer;
    delete[] cleanBuffer;

    return 0;
}