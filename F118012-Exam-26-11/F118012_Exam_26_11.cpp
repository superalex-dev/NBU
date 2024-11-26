// Важно! Откоментирайте задачата, която искате да се извика и съответно изпълни в main метода.
// Например ако искате да изпълните задача 3, закоментирайте всички останали задачи, освен 3-тата.

#include <iostream>
#include <cmath>

using namespace std;

int task1 ()
{
    int n;

    cout << "Enter the size of the arrays (n): ";
    cin >> n;

    if (n<= 0)
    {
        cout << "Invalid size. The array size must be greater than 0.";
        return 1;
    }

    int* A = new int[n];
    int* B = new int[n];

    cout << "Input array A elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> *(A + i);
    }

    cout << "Input array B elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> *(B + i);
    }

    for (int i = 0; i < n; i++)
    {
        int temp = *(A + i);
        *(A + i) = *(B + i);
        *(B + i) = temp;
    }

    cout << "Swapped array A: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << *(A + i) << " ";
    }
    
    cout << endl;

    cout << "Swapped array B: ";
    
    for (int i = 0; i < n; i++)
    {
        cout << *(B + i) << " ";
    }
    
    cout << endl;

    return 0;
}

int task2()
{
    int n;

    cout << "Enter the array size: ";
    cin >> n;

    if (n <= 2)
    {
        cout << "Invalid input. The array size must be > 2.";
        return 1;
    }

    int * A = new int[n];
    
    cout << "Enter the array elements: ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        
        if (A[i] == 0)
        {
            cout << "Invalid input. Elements must be non-zero integers.";
            return 1;
        }
    }

    bool found = false;
    
    for (int i = 1; i < n - 1; i++)
    {
        if (A[0] < A[i] && A[i] < A[n - 1])
        {
            if (!found)
            {
                cout << "Elements that meet the condition A[0] < A[i] < A[n-1] are: ";
            }
            
            cout << A[i] << " ";
            
            found = true;
        }
    }

    if (!found)
    {
        cout<< "No values for A[0] < A[i] < A[n-1].";
    }

    return 0;
}

int task3()
{
    int r;
    int n;

    cout<< "Enter the value of r: ";
    cin >> r;

    cout << "Enter the array size: ";
    cin >> n;

    if (n < 2)
    {
        cout << "Invalid size. The array size must be at least 2.";
        return 1;
    }

    int* A = new int[n];

    cout << "Enter the array elemets: ";
    
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    int closestSum = A[0] + A[1];
    
    int index1 = 0;
    int index2 = 1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int currentSum = A[i] + A[j];
            
            if (abs(currentSum - r) < abs(closestSum - r))
            {
                closestSum = currentSum;
                index1 = i;
                index2 = j;
            }
        }
    }

    if (index1 > index2)
    {
        int temp = index1;
        
        index1 = index2;
        index2 = temp;
    }

    cout << "Elements closest to the sum " << r << " are: " << A[index1] << " and " << A[index2];

    return 0;
}

int task4()
{
    int n;
    
    cout << "Enter the triangles number (1 < n <= 20): ";
    cin >> n;

    if (n <= 1 || n > 20)
    {
        cout << "Invalid number of triangles. It must be between 2 and 20.";
        return 1;
    }

    double a[20];
    double b[20];
    double c[20];
    
    double maxArea = 0;
    
    int maxIndex = -1;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the triangle size " << i + 1 << " (a, b, c): ";
        cin >> a[i] >> b[i] >> c[i];

        if ((a[i] + b[i] <= c[i]) || (a[i] + c[i] <= b[i]) || (b[i] + c[i] <= a[i]))
        {
            cout << "Invalid triangle sides for triangle " << i + 1 << ". Enter valid sides.";
            return 1;
        }

        double s = (a[i] + b[i] + c[i]) / 2.0; // от формулата на Херон, s е полу-периметърът на триъгълника
        double area = sqrt(s * (s - a[i]) * (s - b[i]) * (s - c[i]));

        if (area > maxArea)
        {
            maxArea = area;
            maxIndex = i;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Triangle " << i + 1 << ": a = " << a[i] << ", b = " << b[i] << ", c = " << c[i] << endl;
    }

    if (maxIndex != -1)
    {
        cout << "Largest area triangle is " << maxIndex + 1 << " with sides a = " << a[maxIndex] << ", b = " << b[maxIndex] << ", c = " << c[maxIndex] << " and area = " << maxArea;
    }

    return 0;
}

int main()
{
    task1();
    // task2();
    // task3();
    // task4();
}
