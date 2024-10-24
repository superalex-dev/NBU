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

    if (n >= 1000)
    {
        if (n >= 3000)
        {
            cout << "MMM";
        }
        else if (n >= 2000)
        {
            cout << "MM";
        }
        else
        {
            cout << "M";
        }
    }

    if (n >= 100)
    {
        if (n >= 900)
        {
            cout << "CM";
        }
        else if (n >= 800)
        {
            cout << "DCCC";
        }
        else if (n >= 700)
        {
            cout << "DCC";
        }
        else if (n >= 600)
        {
            cout << "DC";
        }
        else if (n >= 500)
        {
            cout << "D";
        }
        else if (n >= 400)
        {
            cout << "CD";
        }
        else if (n >= 300)
        {
            cout << "CCC";
        }
        else if (n >= 200)
        {
            cout << "CC";
        }
        else
        {
            cout << "C";
        }
    }

    if (n >= 10)
    {
        if (n >= 90)
        {
            cout << "XC";
        }
        else if (n >= 80)
        {
            cout << "LXXX";
        }
        else if (n >= 70)
        {
            cout << "LXX";
        }
        else if (n >= 60)
        {
            cout << "LX";
        }
        else if (n >= 50)
        {
            cout << "L";
        }
        else if (n >= 40)
        {
            cout << "XL";
        }
        else if (n >= 30)
        {
            cout << "XXX";
        }
        else if (n >= 20)
        {
            cout << "XX";
        }

        n %= 10;
    }

    if (n >= 1)
    {
        if (n == 9)
        {
            cout << "IX";
        }
        else if (n == 8)
        {
            cout << "VIII";
        }
        else if (n == 7)
        {
            cout << "VII";
        }
        else if (n == 6)
        {
            cout << "VI";
        }
        else if (n == 5)
        {
            cout << "V";
        }
        else if (n == 4)
        {
            cout << "IV";
        }
        else if (n == 3)
        {
            cout << "III";
        }
        else if (n == 2)
        {
            cout << "II";
        }
        else
        {
            cout << "I";
        }
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
    
    if (romanNumber[index] == 'M') {
        decimalNumber += 1000;
        index++;
    }
    
    if (romanNumber[index] == 'M') {
        decimalNumber += 1000;
        index++;
    }
    
    if (romanNumber[index] == 'M') {
        decimalNumber += 1000;
        index++;
    }
    
    if (romanNumber[index] == 'C' && romanNumber[index + 1] == 'M') {
        decimalNumber += 900;
        index += 2;
    }
    
    if (romanNumber[index] == 'D') {
        decimalNumber += 500;
        index++;
    }
    
    if (romanNumber[index] == 'C' && romanNumber[index + 1] == 'D') {
        decimalNumber += 400;
        index += 2;
    }
    
    if (romanNumber[index] == 'C') {
        decimalNumber += 100;
        index++;
    }
    
    if (romanNumber[index] == 'C') {
        decimalNumber += 100;
        index++;
    }
    
    if (romanNumber[index] == 'C') {
        decimalNumber += 100;
        index++;
    }
    
    if (romanNumber[index] == 'X' && romanNumber[index + 1] == 'C') {
        decimalNumber += 90;
        index += 2;
    }
    
    if (romanNumber[index] == 'L') {
        decimalNumber += 50;
        index++;
    }
    
    if (romanNumber[index] == 'X' && romanNumber[index + 1] == 'L') {
        decimalNumber += 40;
        index += 2;
    }
    
    if (romanNumber[index] == 'X') {
        decimalNumber += 10;
        index++;
    }
    
    if (romanNumber[index] == 'X') {
        decimalNumber += 10;
        index++;
    }
    
    if (romanNumber[index] == 'X') {
        decimalNumber += 10;
        index++;
    }
    
    if (romanNumber[index] == 'I' && romanNumber[index + 1] == 'X') {
        decimalNumber += 9;
        index += 2;
    }
    
    if (romanNumber[index] == 'V') {
        decimalNumber += 5;
        index++;
    }
    
    if (romanNumber[index] == 'I' && romanNumber[index + 1] == 'V') {
        decimalNumber += 4;
        index += 2;
    }
    if (romanNumber[index] == 'I') {
        decimalNumber += 1;
        index++;
    }
    
    if (romanNumber[index] == 'I') {
        decimalNumber += 1;
        index++;
    }
    
    if (romanNumber[index] == 'I') {
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

    if (number < 0) {
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
        cout << "The system has no solution or have infinity solutions" << endl;
    }
    else
    {
        double x = (c1 * b2 - c2 * b1) / d;
        double y = (a1 * c2 - a2 * c1) / d;

        cout << "The system has a solution" << endl;
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
        cout << "The system doesnt have solution or it has infinity solutions." << endl;
    }
    else
    {
        double dx = d1 * (b2 * c3 - b3 * c2) - b1 * (d2 * c3 - d3 * c2) + c1 * (d2 * b3 - d3 * b2);

        double dy = a1 * (d2 * c3 - d3 * c2) - d1 * (a2 * c3 - a3 * c2) + c1 * (a2 * d3 - a3 * d2);

        double dz = a1 * (b2 * d3 - b3 * d2) - b1 * (a2 * d3 - a3 * d2) + d1 * (a2 * b3 - a3 * b2);

        double x = dx / d;
        double y = dy / d;
        double z = dz / d;

        cout << "The solution is:" << endl;
        
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }

    return 0;
}

int main()
{
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7(); //not done
    //task8(); //also not done
}