#include <iostream>
using namespace std;

int task1 ()
{
    // Declare and read the value of x
    int x;
    cin >> x;

    // Declare and read the value of y
    int y;
    cin >> y;
    
    if(x < 2 || x > 16 || y < 1 || y >100)
    {
        cout << "Invalid input data!";
        
        return 0;
    }

    // Declare variable result and save the converted value of y into x number system in it
    string result;
    
    int number = y;
    
    while (number > 0) 
    {
        int remainder = number % x;
        
        if (remainder < 10) 
        {
            result = char('0' + remainder) + result;
        } 
        else
        {
            result = char('A' + (remainder - 10)) + result;
        }
        
        number /= x;
    }
    
    // Print result to the console
    cout << result;

    return 0;
}

int task2()
{
    // Declare and read the value of x
    int x;
    cin >> x;

    // Declare and read the value of y
    int y;
    cin >> y;

    // Declare and read the value of z
    int z;
    cin >> z;

    // Declare variable result and save the Greatest Common Divisor of x, y and z in it
    if (x < 20 || x > 300 || y < 20 || y > 300 || z < 20 || z > 300)
    {
        cout << "Invalid input data!";
        return 0;
    }
    
    
    while (y != 0) 
    {
        int temp = y; //Suzdavam tempova promenliva, za da ne gubq originalnata stoinost na b, koqto shte se izpolzva otnoto v algorituma natatuk.
        
        y = x % y;
        x = temp;
    }
    
    int gcd = x;
    
    while (z != 0) 
    {
        int temp = z; //Suzdavam tempova promenliva, za da ne gubq originalnata stoinost na c, koqto shte se izpolzva otnoto v algorituma natatuk.
        
        z = gcd % z;
        gcd = temp;
    }
    
    int result = gcd;

    // Print result to the console
    cout << result;

    return 0;
}

int task3()
{
    // Declare and read the value of x
    int x;
    cin >> x;

    // Declare and read the value of y
    int y;
    cin >> y;

    // Declare and read the value of z
    int z;
    cin >> z;

    // Declare variable result and save the Least Common Denominator of x, y and z in it
    if (x < 10 || x > 100 || y < 10 || y > 100 || z < 10 || z > 100)
    {
        cout << "Invalid input data!" << endl;
        
        return 0;
    }
    
    int a = x;
    int b = y;
    
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    int gcdXY = a;
    
    int lcmXY = (x * y) / gcdXY;
    
    a = lcmXY;
    
    b = z;
    
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    int result = (lcmXY * z) / a;
    
    // Print result to the console
    cout << result << endl;

    return 0;
}

int main()
{
    task1();
    // task2();
    // task3();
}
