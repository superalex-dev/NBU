#include <iostream>
#include <vector>
#include <ctime>
#include <random>
#include <fstream>

using namespace std;

static bool linearFull(const vector<int>& arr, const int target)
{
    bool found = false;
    
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            found = true;
        }
    }
    return found;
}

static bool linearAnchor(const vector<int>& arr, const int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

static bool binarySearchCustom(const vector<int>& arr, const int target)
{
    int l = 0, r = arr.size() - 1;
    
    while (l <= r)
    {
        const int mid = (l + r) / 2;
        
        if (arr[mid] == target)
        {
            return true;
        }
        
        if (arr[mid] < target)
        {
            l = mid + 1;
        }
        
        else
        {
            r = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> sizes = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    
    cout << "N\tFullLinear\tAnchorLinear\tBinarySearch\n";

    ofstream fout("rezultati.csv");
    fout << "N,FullLinear,AnchorLinear,BinarySearch\n";
    

    for (int s = 0; s < sizes.size(); s++)
    {
        int n = sizes[s];

        vector<int> arr;
        
        mt19937 gen(random_device{}());
        
        uniform_int_distribution<> dist(1, n);
        
        for (int i = 0; i < n; ++i)
        {
            arr.push_back(dist(gen));
        }

        vector<int> sorted_arr(n);
        
        for (int i = 0; i < n; ++i)
        {
            sorted_arr[i] = i + 1;
        }

        vector<int> targets(5);
        
        cout << "Vuvedi 5 chisla za tarsene (v diapazona 1 - " << n << "): ";
        
        for (int i = 0; i < 5; ++i)
        {
            cin >> targets[i];
        }

        double time_full = 0, time_anchor = 0, time_binary = 0;

        for (int t = 0; t < 5; t++)
        {
            const int repetitions = 1000;
            const int target = targets[t];

            clock_t c0 = clock();
            
            for (int i = 0; i < repetitions; ++i)
            {
                linearFull(arr, target);
            }
            clock_t c1 = clock();
            
            time_full += static_cast<double>(c1 - c0) / CLOCKS_PER_SEC;

            c0 = clock();
            
            for (int i = 0; i < repetitions; ++i)
            {
                linearAnchor(arr, target);
            }
            
            c1 = clock();
            time_anchor += static_cast<double>(c1 - c0) / CLOCKS_PER_SEC;

            c0 = clock();
            
            for (int i = 0; i < repetitions; ++i)
            {
                binarySearchCustom(sorted_arr, target);
            }
            
            c1 = clock();
            time_binary += static_cast<double>(c1 - c0) / CLOCKS_PER_SEC;
        }

        cout << n << "\t" << time_full << "\t\t" << time_anchor << "\t\t" << time_binary << endl;
        fout << n << "," << time_full << "," << time_anchor << "," << time_binary << "\n";
    }

    fout.close();
    return 0;
}
