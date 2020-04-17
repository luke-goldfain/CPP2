// ChangeMaker.cpp
#include "ChangeMaker.h"

using namespace std;

float ChangeMaker::GetTotalChange(float price, float paid)
{
    if (paid >= price)
    {
        return paid - price;
    }

    return 0.;
}

vector<float> ChangeMaker::GetChangeInCoins(float totalChange)
{
    vector<float> changeReturnVec;

    float unrenderedChange = totalChange;

    while (unrenderedChange > 0.)
    {
        for (int i = 0; i < changeValues.size(); i++)
        {
            if (changeValues[i] <= unrenderedChange)
            {
                unrenderedChange -= changeValues[i];

                changeReturnVec.push_back(changeValues[i]);

                break;
            }
        }

        if (unrenderedChange < 0.01f) // just covering my ass here from rounding tomfoolery
        {
            break;
        }
    }

    return changeReturnVec;
}