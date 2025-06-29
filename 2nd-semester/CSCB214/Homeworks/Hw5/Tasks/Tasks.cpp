#include <iostream>
using namespace std;

//10k iteracii

static void piFixedFor()
{
    double pi = 0.0;
    
    for (int i = 0; i < 10000; i++)
    {
        pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    }
    
    pi *= 4;
    
    cout << "Pi (for loop, 10000 iterations): " << pi << endl;
}


static void piFixedGoto()
{
    double pi = 0.0;
    
    int i = 0;
    
    start:
        if (i >= 10000)
        {
            goto end;
        }
    
    pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);
    
    i++;
    
    goto start;
    
    end:
        pi *= 4;
    
    cout << "Pi (goto, 10000 iterations): " << pi << endl;
}


//vtori variant - do 0.0001

static void piPrecisionWhile()
{
    double pi = 0.0;
    
    int i = 0;
    
    while (true)
    {
        const double prev = pi;
        
        pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);

        const double diff = (pi - prev >= 0) ? (pi - prev) : -(pi - prev);
        
        if (diff < 0.0001)
        {
            break;
        }
        
        i++;
    }
    
    pi *= 4;
    
    cout << "Pi (while, precision 0.0001): " << pi << ", iterations: " << i + 1 << endl;
}


static void piPrecisionGoto()
{
    double pi = 0.0;
    
    int i = 0;
    
    start:
        const double prev = pi;
    
    pi += (i % 2 == 0 ? 1.0 : -1.0) / (2 * i + 1);

    const double diff = (pi - prev >= 0) ? (pi - prev) : -(pi - prev);
    
    if (diff < 0.0001)
    {
        goto end;
    }
    
    i++;
    
    goto start;
    
    end:
        pi *= 4;
    cout << "Pi (goto, precision 0.0001): " << pi << ", iterations: " << i + 1 << endl;
}

int main()
{
    piFixedFor();

    piFixedGoto();

    piPrecisionWhile();

    piPrecisionGoto();

    return 0;
}