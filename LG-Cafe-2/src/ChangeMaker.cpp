// ChangeMaker.cpp
#include "ChangeMaker.h"

using namespace std;

double ChangeMaker::GetTotalChange(double price, double paid)
{
    if (paid >= price)
    {
        return paid - price;
    }

    return 0.;
}

vector<double> ChangeMaker::GetChangeInCoins(double totalChange)
{
    vector<double> changeReturnVec;

    double unrenderedChange = totalChange;

    while (unrenderedChange > 0.)
    {
        for (int i = 0; i < changeValues.size(); i++)
        {
            if (changeValues[i] <= unrenderedChange + 0.009) // Bruteforcey... Add 0.009 so doubles quit rounding down like they like to
            {
                unrenderedChange -= changeValues[i];

                changeReturnVec.push_back(changeValues[i]);

                break;
            }
        }

        if (unrenderedChange < 0.01) // just covering my ass here from double tomfoolery
        {
            break;
        }
    }

    return changeReturnVec;
}