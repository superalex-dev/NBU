#include <iostream>

using namespace std;

int main()
{
    const int array[] = {1, 1, 8, 0, 1, 2};
    
    int size = std::size(array);
    
    for (int t = 0; t < 4; t++)
    {
        const int targets[] = {1, 2, 3, 4};

        const int target = targets[t];
        
        bool found = false;
        
        int checks = 0;

        for (int i = 0; i < size; i++)
        {
            checks++;
            
            if (array[i] == target)
            {
                found = true;
            }
        }

        cout << "Target " << target << (found ? " found" : " not found") << ", checks: " << checks << endl;
    }

    return 0;
}