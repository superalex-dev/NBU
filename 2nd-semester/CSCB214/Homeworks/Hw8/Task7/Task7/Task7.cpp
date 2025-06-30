#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

static void classicBubbleSort(int arr[], const int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

static void optimizedBubbleSort(int arr[], const int size)
{
    bool swapped = true;
    int i = 0;

    while (i < size - 1 && swapped)
    {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        i++;
    }
}

void copyArray(int source[], int dest[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = source[i];
    }
}

int main()
{
    srand(time(NULL));

    ofstream csv("bubble_sort_times.csv");
    csv << "Size,FixedSortTime,OptimizedSortTime" << endl;

    cout << "Size, FixedSortTime, OptimizedSortTime" << endl;

    for (int size = 1000; size <= 50000; size += 1000)
    {
        int* original = new int[size];
        int* copy1 = new int[size];
        int* copy2 = new int[size];

        for (int i = 0; i < size; i++)
        {
            original[i] = rand() % 100000 + 1;
        }

        copyArray(original, copy1, size);
        copyArray(original, copy2, size);

        clock_t start = clock();
        classicBubbleSort(copy1, size);
        
        clock_t end = clock();
        const float timeFixed = static_cast<float>(end - start) / CLOCKS_PER_SEC;

        start = clock();
        optimizedBubbleSort(copy2, size);
        
        end = clock();
        const float timeOptimized = static_cast<float>(end - start) / CLOCKS_PER_SEC;

        cout << size << ", " << timeFixed << ", " << timeOptimized << endl;
        csv << size << "," << timeFixed << "," << timeOptimized << endl;

        delete[] original;
        delete[] copy1;
        delete[] copy2;
    }

    csv.close();

    return 0;
}