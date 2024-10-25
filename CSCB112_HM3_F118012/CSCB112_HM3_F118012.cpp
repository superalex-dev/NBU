// Важно! Откоментирайте задачата, която искате да се извика и съответно изпълни в main метода.
// Например ако искате да изпълните задача 3, закоментирайте всички останали задачи, освен 3-тата.

#include <iostream>
#include <cstdlib>

using namespace std;

#define MIN 1.0
#define MAX 25.0

int task1()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 1 || n > 3999)
    {
        cout << "Invalid input!" << endl;
        return 1;
    }

    switch (n / 1000)
    {
        case 3:
            cout << "MMM";
            break;
        case 2:
            cout << "MM";
            break;
        case 1:
            cout << "M";
            break;
        default:
            break;
    }

    n %= 1000;

    switch (n / 100)
    {
        case 9:
            cout << "CM";
            break;
        case 8:
            cout << "DCCC";
            break;
        case 7:
            cout << "DCC";
            break;
        case 6: 
            cout << "DC";
            break;
        case 5: 
            cout << "D";
            break;
        case 4: 
            cout << "CD";
            break;
        case 3: 
            cout << "CCC";
            break;
        case 2: 
            cout << "CC";
            break;
        case 1: 
            cout << "C"; break;
        default:
            break;
    }

    n %= 100;
    
    switch (n / 10)
    {
        case 9: 
            cout << "XC";
            break;
        case 8: 
            cout << "LXXX";
            break;
        case 7: 
            cout << "LXX";
            break;
        case 6: 
            cout << "LX";
            break;
        case 5: 
            cout << "L";
            break;
        case 4: 
            cout << "XL";
            break;
        case 3: 
            cout << "XXX";
            break;
        case 2: 
            cout << "XX";
            break;
        case 1: 
            cout << "X";
            break;
        default:
            break;
    }

    n %= 10;

    switch (n)
    {
        case 9: 
            cout << "IX";
            break;
        case 8: 
            cout << "VIII";
            break;
        case 7: 
            cout << "VII";
            break;
        case 6: 
            cout << "VI";
            break;
        case 5: 
            cout << "V";
            break;
        case 4: 
            cout << "IV";
            break;
        case 3: 
            cout << "III";
            break;
        case 2: 
            cout << "II";
            break;
        case 1: 
            cout << "I";
            break;
        default:
            break;
    }

    cout << endl;
    return 0;
}

int task2()
{
    string romanNumber;
    int decimalNumber = 0;

    cout << "Enter roman number (between I and MMMCMXCIX): ";
    cin >> romanNumber;

    int index = 0;

    if (romanNumber[index] == 'M')
    {
        decimalNumber += 1000;
        index++;
    }

    if (romanNumber[index] == 'M')
    {
        decimalNumber += 1000;
        index++;
    }

    if (romanNumber[index] == 'M')
    {
        decimalNumber += 1000;
        index++;
    }

    if (romanNumber[index] == 'C' && romanNumber[index + 1] == 'M')
    {
        decimalNumber += 900;
        index += 2;
    }

    if (romanNumber[index] == 'D')
    {
        decimalNumber += 500;
        index++;
    }

    if (romanNumber[index] == 'C' && romanNumber[index + 1] == 'D')
    {
        decimalNumber += 400;
        index += 2;
    }

    if (romanNumber[index] == 'C')
    {
        decimalNumber += 100;
        index++;
    }

    if (romanNumber[index] == 'C')
    {
        decimalNumber += 100;
        index++;
    }

    if (romanNumber[index] == 'C')
    {
        decimalNumber += 100;
        index++;
    }

    if (romanNumber[index] == 'X' && romanNumber[index + 1] == 'C')
    {
        decimalNumber += 90;
        index += 2;
    }

    if (romanNumber[index] == 'L')
    {
        decimalNumber += 50;
        index++;
    }

    if (romanNumber[index] == 'X' && romanNumber[index + 1] == 'L')
    {
        decimalNumber += 40;
        index += 2;
    }

    if (romanNumber[index] == 'X')
    {
        decimalNumber += 10;
        index++;
    }

    if (romanNumber[index] == 'X')
    {
        decimalNumber += 10;
        index++;
    }

    if (romanNumber[index] == 'X')
    {
        decimalNumber += 10;
        index++;
    }

    if (romanNumber[index] == 'I' && romanNumber[index + 1] == 'X')
    {
        decimalNumber += 9;
        index += 2;
    }

    if (romanNumber[index] == 'V')
    {
        decimalNumber += 5;
        index++;
    }

    if (romanNumber[index] == 'I' && romanNumber[index + 1] == 'V')
    {
        decimalNumber += 4;
        index += 2;
    }
    if (romanNumber[index] == 'I')
    {
        decimalNumber += 1;
        index++;
    }

    if (romanNumber[index] == 'I')
    {
        decimalNumber += 1;
        index++;
    }

    if (romanNumber[index] == 'I')
    {
        decimalNumber += 1;
        index++;
    }

    cout << "The decimal value is: " << decimalNumber << endl;
    return 0;
}

int task3()
{
    double number;

    cout << "Enter a number: ";
    cin >> number;

    if (number >= MIN && number <= MAX)
    {
        cout << "The number is in the range [" << MIN << ", " << MAX << "]" << endl;
    }
    else
    {
        cout << "The number is not in the range [" << MIN << ", " << MAX << "]" << endl;
    }

    return 1;
}

int task4()
{
    int number;
    cout << "Enter a integer: ";
    cin >> number;

    if (number < 0)
    {
        cout << "-";
        number = -number;
    }

    if (number >= 10000)
    {
        cout << (number / 10000) % 10 << endl;
    }

    if (number >= 1000)
    {
        cout << (number / 1000) % 10 << endl;
    }
    if (number >= 100)
    {
        cout << (number / 100) % 10 << endl;
    }
    if (number >= 10)
    {
        cout << (number / 10) % 10 << endl;
    }

    cout << number % 10 << endl;

    return 0;
}

int task5()
{
    int min;
    int max;

    cout << "Enter min number: ";
    cin >> min;

    cout << "Enter max number: ";
    cin >> max;

    int randomNumber = rand() % (max - min + 1) + min;

    cout << "Generated random number: " << randomNumber << endl;

    if (randomNumber >= -999 && randomNumber <= 999)
    {
        if (randomNumber < 0)
        {
            cout << "-" << endl;
            randomNumber = -randomNumber;
        }

        if (randomNumber >= 100)
        {
            cout << randomNumber / 100 << endl;
        }

        if (randomNumber >= 10)
        {
            cout << (randomNumber / 10) % 10 << endl;
        }

        cout << randomNumber % 10 << endl;
    }
    else
    {
        cout << "The number has more than 3 digits" << endl;
    }

    return 0;
}

int task6()
{
    float min;
    float max;

    cout << "Enter a min float: ";
    cin >> min;
    
    cout << "Enter a max float: ";
    cin >> max;

    float randomReal = min + (rand() / (float)RAND_MAX) * (max - min);

    cout << "Generated random float: " << randomReal << endl;

    return 0;
}

int task7()
{
    double a1;
    double a2;
    double b1;
    double b2;
    double c1;
    double c2;

    cout << "Enter a1, b1 and c1: ";
    cin >> a1 >> b1 >> c1;

    cout << "Enter a2, b2 and c2: ";
    cin >> a2 >> b2 >> c2;

    double d = a1 * b2 - a2 * b1;

    if (d == 0)
    {
        cout << "The system has no solution or have infinitely many solutions" << endl;
    }
    else
    {
        double x = (c1 * b2 - c2 * b1) / d;
        double y = (a1 * c2 - a2 * c1) / d;

        cout << "x = " << x << " y = " << y << endl;
    }

    return 0;
}

int task8()
{
    double a1;
    double b1;
    double c1;
    double d1;
    double a2;
    double b2;
    double c2;
    double d2;
    double a3;
    double b3;
    double c3;
    double d3;

    cout << "Enter (a1, b1, c1, d1): ";
    cin >> a1 >> b1 >> c1 >> d1;

    cout << "Enter (a2, b2, c2, d2): ";
    cin >> a2 >> b2 >> c2 >> d2;

    cout << "enter (a3, b3, c3, d3): ";
    cin >> a3 >> b3 >> c3 >> d3;

    double d = a1 * (b2 * c3 - b3 * c2) - b1 * (a2 * c3 - a3 * c2) + c1 * (a2 * b3 - a3 * b2);

    if (d == 0)
    {
        cout << "The system doesnt have solution or it has infinitely many solutions." << endl;
    }
    else
    {
        double dx = d1 * (b2 * c3 - b3 * c2) - b1 * (d2 * c3 - d3 * c2) + c1 * (d2 * b3 - d3 * b2);

        double dy = a1 * (d2 * c3 - d3 * c2) - d1 * (a2 * c3 - a3 * c2) + c1 * (a2 * d3 - a3 * d2);

        double dz = a1 * (b2 * d3 - b3 * d2) - b1 * (a2 * d3 - a3 * d2) + d1 * (a2 * b3 - a3 * b2);

        double x = dx / d;
        double y = dy / d;
        double z = dz / d;


        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }

    return 0;
}

int task9()
{
    double a;
    double b;
    int n;

    cout << "Enter A and B: ";
    cin >> a >> b;

    cout << "Select and enter a one of the following operations: 1 - addition, 2 - subtraction, 3 - multiplication, 4 - division: "; cin >> n;

    if (n < 1 || n > 4)
    {
        cout << "The number is not one of the possible operations" << endl;
        return 1;
    }

    if (n == 4 && b == 0)
    {
        cout << "division by 0 is impossible" << endl;
        return 1;
    }

    switch (n)
    {
        case 1:
            cout << "addition: " << a + b << endl;
            break;
        case 2:
            cout << "subtraction: " << a - b << endl;
            break;
        case 3:
            cout << "multiplication: " << b * b << endl;
            break;
        case 4:
            cout << "division: " << a / b << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    return 0;
}

int task10()
{
    int x1;
    cout << "Enter a number between 10 and 40: ";
    
    cin >> x1;

    if (x1 < 10 || x1 > 40)
    {
        cout << "Invalid input, enter a number between 10 and 40" << endl;
        return 1;
    }

    string result;

    if (x1 >= 10 && x1 <= 19)
    {
        switch (x1)
        {
            case 10:
                result = "Ten";
                break;
            case 11:
                result = "Eleven";
                break;
            case 12:
                result = "Twelve";
                break;
            case 13:
                result = "Thirteen";
                break;
            case 14:
                result = "Fourteen";
                break;
            case 15:
                result = "Fifteen";
                break;
            case 16:
                result = "Sixteen";
                break;
            case 17:
                result = "Seventeen";
                break;
            case 18:
                result = "Eighteen";
                break;
            case 19:
                result = "Nineteen";
                break;
            default:
                break;
        }

        result += " educational tasks";
    }
    else
    {
        int tens = x1 / 10;
        int units = x1 % 10;

        switch (tens)
        {
            case 2:
                result = "Twenty";
                break;
            case 3:
                result = "Thirty";
                break;
            case 4:
                result = "Forty";
                break;
            default:
                break;
        }

        if (units != 0)
        {
            result += " and ";

            switch (units)
            {
                case 1:
                    result += "one";
                    break;
                case 2:
                    result += "two";
                    break;
                case 3:
                    result += "three";
                    break;
                case 4:
                    result += "four";
                    break;
                case 5:
                    result += "five";
                    break;
                case 6:
                    result += "six";
                    break;
                case 7:
                    result += "seven";
                    break;
                case 8:
                    result += "eight";
                    break;
                case 9:
                    result += "nine";
                    break;
                default:
                    break;
            }
        }

        if (units == 1)
        {
            result += " educational task";
        }
        else
        {
            result += " educational tasks";
        }
    }

    cout << result << endl;

    return 0;
}

int main()
{
    task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
}
