#include "sqrtpow.hpp"
#include <iostream>
#include <string>

using namespace std;

double calcSqrt(double entry)
{
    if (entry <= 0)
    {
        return 0;
    }

    double returnRoot = 0;

    while (returnRoot * returnRoot < entry)
    {
        returnRoot++;
    }

    while (returnRoot * returnRoot > entry)
    {
        returnRoot -= 0.1;
    }

    // Makes sure we round up or down correctly
    while (returnRoot * returnRoot < entry && (returnRoot + 0.01) * (returnRoot + 0.01) - entry < entry - (returnRoot * returnRoot))
    {
        returnRoot += 0.01;
    }

    // Could keep getting more precise but I'm stopping at 2 decimal places

    return returnRoot;
}

double calcPow(double entry, int power)
{
    double returnPow = 1;

    for (int i = 0; i < power; i++)
    {
        returnPow *= entry;

        if (power - i < 1)
        {
            // if we could accept fractional powers, something cool would happen here I assume
        }
    }

    return returnPow;
}

