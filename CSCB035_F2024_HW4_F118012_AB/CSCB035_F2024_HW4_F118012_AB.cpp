#include <iostream>
#include <string>

using namespace std;

string encodeMessage(const string& message, int n)
{
    string encodedMessage = "";

    if (n < 0 || n > 25) {
        return "Invalid input data!";
    }

    for (int i = 0; i < message.length(); i++)
    {
        char c = message[i];
        
        if (c >= 'a' && c <= 'z')
        {
            c = 'a' + (c - 'a' + n) % 26;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = 'A' + (c - 'A' + n) % 26;
        }
        
        encodedMessage += c;
    }

    return encodedMessage;
}

bool isValidDate(int year, int month, int day)
{
    if (month < 1 || month > 12)
    {
        return false;
    }
    if (day < 1 || day > 31)
    {
        return false;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
    {
        daysInMonth[1] = 29;
    }

    return day <= daysInMonth[month - 1];
}

bool validateEGN(const char* egn)
{
    if (strlen(egn) != 10)
    {
        cout << "Invalid input data!" << endl;
        return false;
    }

    int year = (egn[0] - '0') * 10 + (egn[1] - '0');
    int month = (egn[2] - '0') * 10 + (egn[3] - '0');
    int day = (egn[4] - '0') * 10 + (egn[5] - '0');

    if (month >= 1 && month <= 12)
    {
        year += 1900;
    }
    else if (month >= 21 && month <= 32)
    {
        year += 1800;
        month -= 20;
    }
    else if (month >= 41 && month <= 52)
    {
        year += 2000;
        month -= 40;
    }
    else
    {
        return false;
    }

    if (!isValidDate(year, month, day))
    {
        return false;
    }

    int weights[] = {2, 4, 8, 5, 10, 9, 7, 3, 6};
    int sum = 0;

    for (int i = 0; i < 9; ++i) {
        sum += (egn[i] - '0') * weights[i];
    }

    int controlDigit = sum % 11;
    if (controlDigit == 10) controlDigit = 0;

    return controlDigit == (egn[9] - '0');
}

int task1()
{
    string message;
    getline(cin, message);  // използвам getline за четене на текст от целия ред

    int n;
    cin >> n;

    cout << encodeMessage(message, n) << endl;
    
    return 0;
}

int task2()
{
    char egn[20];
    cin >> egn;

    if (strlen(egn) != 10)
    {
        cout << "Invalid input data!" << endl;
    }
    else
    {
        if (validateEGN(egn))
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

    return 0;
}



int main()
{
    task1();
    // task2();
    
    return 0;
}
