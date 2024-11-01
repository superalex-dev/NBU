// Важно! Откоментирайте задачата, която искате да се извика и съответно изпълни в main метода.
// Например ако искате да изпълните задача 3, закоментирайте всички останали задачи, освен 3-тата.

#include <iostream>
#include <cmath>

using namespace std;

int task1()
{
    long long number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    number = abs(number);

    int count = (number == 0) ? 1 : 0;

    while (number > 0)
    {
        count++;
        number /= 10;
    }

    cout << "The number of digits in the number is: " << count << endl;

    return 0;
}

int task2()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    number = abs(number);

    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    cout << "The sum of the digits in the number is: " << sum << endl;

    return 0;
}

int task3()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;
    
    number = abs(number);

    int reversedNum = 0;

    while (number > 0)
    {
        int lastDigit = number % 10;
        reversedNum = reversedNum * 10 + lastDigit;
        number /= 10;
    }

    cout << "The reversed number is: " << reversedNum << endl;

    return 0;
}

int task4()
{
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    int count5 = 0;
    int count6 = 0;
    int count7 = 0;
    int count8 = 0;
    int count9 = 0;

    if (number == 0)
    {
        count0++;
    }
    else
    {
        while (number > 0)
        {
            int digit = number % 10;
            
            switch (digit)
            {
                case 0:
                    count0++;
                    break;
                case 1:
                    count1++;
                    break;
                case 2:
                    count2++;
                    break;
                case 3:
                    count3++;
                    break;
                case 4:
                    count4++;
                    break;
                case 5:
                    count5++;
                    break;
                case 6:
                    count6++;
                    break;
                case 7:
                    count7++;
                    break;
                case 8:
                    count8++;
                    break;
                case 9:
                    count9++;
                    break;
            }
            
            number /= 10;
        }
    }

    cout << "Digit/number of occurrences ";
    
    cout << "0/" << count0 << ", ";
    
    cout << "1/" << count1 << ", ";
    
    cout << "2/" << count2 << ", ";
    
    cout << "3/" << count3 << ", ";
    
    cout << "4/" << count4 << ", ";
    
    cout << "5/" << count5 << ", ";
    
    cout << "6/" << count6 << ", ";
    
    cout << "7/" << count7 << ", ";
    
    cout << "8/" << count8 << ", ";
    
    cout << "9/" << count9 << endl;

    return 0;
}

int task5()
{
    char symbol;
    cout << "Enter a symbol: ";
    cin >> symbol;

    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int s = 0; s < rows - i; s++)
        {
            cout << ' ';
        }

        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << symbol;
        }

        cout << endl;
    }

    return 0;
}

int task6()
{
    int number;
    cout << "Enter a digit (0-9): ";
    cin >> number;

    if (number < 0 || number > 9) {
        cout << "Invalid input! Enter a digit from 0 to 9" << endl;
        return 1;
    }

    int width = 2 * number;
    
    for (int i = 0; i < width; ++i)
    {
        cout << '0';
    }

    cout << endl;

    for (int row = 1; row <= number; ++row)
    {
        for (int i = 1; i <= row; ++i)
        {
            cout << i;
        }

        int zeros = width - 2 * row;
        
        for (int i = 0; i < zeros; ++i)
        {
            cout << '0';
        }

        int start = (row == number) ? number : row;
        
        for (int i = start; i >= 1; --i)
        {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}

int task7Star()
{
    int number;
    
    cout << "Enter a digit: ";
    cin >> number;

    int width = 2 * number - 1;

    for (int i = 0; i < width; i++)
    {
        cout << '0';
    }

    cout << endl;

    for (int row = 1; row <= number; row++)
    {
        for (int i = 1; i <= row; i++)
        {
            cout << i;
        }

        int zeros = 2 * number - 3 - 2 * (row - 1);
        
        if (zeros > 0)
        {
            for (int i = 0; i < zeros; ++i)
            {
                cout << '0';
            }
        }
        else
        {
            zeros = 0;
        }

        if (zeros > 0)
        {
            for (int i = row; i >= 1; i--)
            {
                cout << i;
            }
        }
        else
        {
            for (int i = row - 1; i >= 1; i--)
            {
                cout << i;
            }
        }

        cout << endl;
    }

    return 0;
}

int task7()
{
    int a;
    int m;
    int n;
    
    double y = 0.0;

    cout << "Enter a: ";
    cin >> a;
    
    cout << "Enter m: ";
    cin >> m;
    
    cout << "Enter n: ";
    cin >> n;
    
    if (a <= 0 || m <= 0 || n <= 0)
    {
        cout << "Enter enter a a, m and n" << endl;
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        double product = 1.0;
        
        for (int j = 1; j <= m; j++)
        {
            product *= (double(a + j) / (i + j));
        }
        
        y += product;
    }

    cout << "The value of y is: " << y << endl;

    return 0;
}

int task8()
{
    int n;
    
    cout << "Enter the number of integers: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter valid numbers" << endl;
        
        return 1;
    }

    int result;
    
    cout << "Enter first number: ";
    cin >> result;

    if (result <= 0)
    {
        cout << "The number should be > 0." << endl;
        return 1;
    }

    for (int i = 2; i <= n; i++)
    {
        int number;
        
        cout << "Enter num " << i << ": ";
        cin >> number;

        if (number <= 0)
        {
            cout << "All numbers should be > 0" << endl;
            return 1;
        }

        int a = result;
        int b = number;
        
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }

        result = a;

        if (result == 1)
        {
            break;
        }
    }

    cout << "The GCD is : " << result << endl;

    return 0;
}

int task9()
{
    int n;
    int m;

    cout << "Enter n: ";
    cin >> n;

    cout << "Enter m: ";
    cin >> m;

    if (m <= 0 || n <= 0 || m >= n)
    {
        cout << "Enter valid numbers. They should be 0 < m < n" << endl;

        return 1;
    }

    for (int i = m; i <= n; i++)
    {
        int number = i;
        bool isPrime = true;

        for (int j = number; j > 0 && isPrime; j /= 10)
        {
            int currentDigit = j % 10;

            int k = j / 10;

            while (k > 0)
            {
                if (currentDigit == k % 10)
                {
                    isPrime = false;
                    break;
                }

                k /= 10;
            }
        }

        if (isPrime)
        {
            cout << number << " ";
        }
    }

    cout << endl;

    return 0;
}

int task10()
{
    int n;

    cout << "Enter the number of prime numbers that start with 3: ";
    cin >> n;

    if (n <= 1)
    {
        cout << "Enter a number greater than 1" << endl;
        return 1;
    }

    int count = 0;
    int number = 3;

    cout << "The first " << n << " prime numbers that start with 3 are: ";

    while (count < n)
    {
        bool isPrime = true;

        if (number < 2)
        {
            isPrime = false;
        }
        else
        {
            for (int i = 2; i * i <= number; i++)
            {
                if (number % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }

        int firstDigit = number;

        while (firstDigit >= 10)
        {
            firstDigit /= 10;
        }

        if (isPrime && firstDigit == 3)
        {
            cout << number << " ";
            count++;
        }

        number++;
    }

    cout << endl;

    return 0;
}

int task11()
{
    int k;
    cout << "Enter k: ";
    cin >> k;

    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 1)
    {
        cout << "Enter a number greater than 0" << endl;
        return 1;
    }

    int s = 0;

    for (int i = 1; i <= n; i++)
    {
        int term = (i - 2) * (i - 2);
        int term2 = k * i;

        s += term + term2;
    }

    cout << "The sum is: " << s << endl;

    return 0;
}

int task12()
{
    double a;
    int n;

    cout << "Enter value for a: ";
    cin >> a;

    cout << "Enter value for n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Enter a positive integer for n" << endl;
        return 1;
    }

    srand(unsigned int(time(0)));

    double x = -96 + static_cast<double>(rand()) / RAND_MAX * (113 + 96);

    double s = 0.0;

    for (int i = 1; i <= n; ++i)
    {
        double xi = pow(x, i);
        double aPow = pow(a, n - i);
        double term = xi * (i + x / aPow);
        
        s += term;
    }

    cout << "The random number is: " << x << endl;
    cout << "The value of polynomial is: " << s << endl;

    return 0;
}

int task13()
{
    int x;
    int y;
    int z;
    int n;
    
    cout << "Enter value for x: ";
    cin >> x;
    
    cout << "Enter value for y: ";
    cin >> y;
    
    cout << "Enter value for z: ";
    cin >> z;
    
    cout << "Enter value for n: ";
    cin >> n;

    if (x <= 0 || y <= 0 || z <= 0 || n <= 0)
    {
        cout << "Please enter positive values for x, y, z, and n." << endl;
        return 1;
    }

    int s = 0;
    int powerX = 1;
    int currentN = n;

    for (int k = 0; currentN >= 0; ++k)
    {
        int term = y * currentN * int(pow(z, currentN)) * powerX;

        s += term;

        powerX *= x;
        currentN -= int(pow(2, k));
    }

    cout << "The value of polynomial P is: " << s << endl;

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
    //task7Star();
    //task8();
    //task9();
    //task10();
    //task11();
    //task12();
    //task13();
}
