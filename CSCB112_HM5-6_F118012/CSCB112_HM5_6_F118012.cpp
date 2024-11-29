#include <iostream>
using namespace std;
 
int task1()
{
    int rows;
    int cols;
 
    cout << "Enter the number of rows: ";
    cin >> rows;
 
    cout << "Enter the number of columns: ";
    cin >> cols;
 
    int** array = new int*[rows];
    
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }
 
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            array[i][j] = -12 + (rand() % (122 - (-12) + 1));
        }
    }
 
    cout << "Generated array: " << endl;
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
    
}
 
int task2()
{
    int rows;
    int cols;
 
    cout << "Enter the number of rows: ";
    cin >> rows;
 
    cout << "Enter the number of columns: ";
    cin >> cols;
 
    if (rows != cols)
    {
        cout << "Error: The array must be square to have a secondary diagonal! " << endl;
        return 1;
    }
 
    int** array = new int*[rows];
    
    for (int i = 0; i < rows; ++i)
    {
        array[i] = new int[cols];
    }
 
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            array[i][j] = -12 + (rand() % (122 - (-12) + 1));
        }
    }
 
    cout << "Original array: " << endl;
    
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j > cols - i - 1)
            {
                array[i][j] = 0;
            }
        }
    }
    
    cout << "Modified array: " << endl;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            std::cout << array[i][j] << " ";
        }
        cout << endl;
    }
 
    return 0;
}
 
int task5()
{
    int n;
    int p;
    int q;
    
    cout << "Enter the number of elements in the array (1 < n < 100): ";
    cin >> n;

    if (n <= 1 || n >= 100)
    {
        cout << "Invalid input for n. It should be in the range (1, 100)." << endl;
        return 1;
    }

    int arr[100];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the interval [p, q]: ";
    cin >> p >> q;

    if (p > q)
    {
        cout << "Invalid interval. p should be less than or equal to q." << endl;
        return 1;
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if ((i + 1) % 2 != 0 && arr[i] % 2 == 0 && arr[i] >= p && arr[i] <= q)
        {
            count++;
        }
    }

    cout << "Number of even elements with odd positions in the interval [" << p << ", " << q << "] is: " << count << endl;

    return 0;
}

int task6()
{
    int n;
    int r;
    
    cout << "Enter the number of elements in the array (1 < n < 100): ";
    cin >> n;

    if (n <= 1 || n >= 100)
    {
        cout << "Invalid input for n. It should be in the range (1, 100)." << endl;
        return 1;
    }

    int arr[100];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value of r: ";
    cin >> r;

    int firstPositiveIndex = -1;
    int lastPositiveIndex = -1;
    int rthPositiveIndex = -1;
    int positiveCount = 0; 

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;

            if (firstPositiveIndex == -1)
            {
                firstPositiveIndex = i + 1;
            }

            lastPositiveIndex = i + 1;

            if (positiveCount == r)
            {
                rthPositiveIndex = i + 1;
            }
        }
    }

    cout << "a) Position of the first positive element: " << firstPositiveIndex << endl;
    cout << "b) Position of the last positive element: " << lastPositiveIndex << endl;
    cout << "c) Position of the " << r << "-th positive element: " << rthPositiveIndex << endl;

    return 0;
}

int task7()
{
    int n;

    cout << "Enter the number of elements in the array (1 < n < 100): ";
    cin >> n;

    if (n <= 1 || n >= 100)
    {
        cout << "Invalid input for n. It should be in the range (1, 100)." << endl;
        return 1;
    }

    int arr[100];

    cout << "Enter " << n << " integers:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Numbers divisible by their indices:" << endl;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % i == 0) {
            cout << arr[i] << " ";
        }
    }

    for (int i = 1; i < n; i++)
    {
        cout << "Checking element " << arr[i] << " at index " << i << ": ";
        if (arr[i] % i == 0)
        {
            cout << "Divisible" << endl;
            cout << arr[i] << " ";
        }
        else
        {
            cout << "Not divisible" << endl;
        }
    }


    cout << endl;

    return 0;
}
 
int main()
{
    // task1();
    // task2();
    // task3();
    // task4();
    // task5();
    // task6();
    task7();
    // task8();
    // task9();
    // task10();
}
 