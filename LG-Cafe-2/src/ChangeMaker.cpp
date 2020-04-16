// ChangeMaker.cpp
#include <vector>
#include "ChangeMaker.h"

using namespace std;

double ChangeMaker::GetTotalChange(double price, double paid)
{
    return paid - price;
}

vector<double> ChangeMaker::GetChangeInCoins(double totalChange)
{
    vector<double> changeReturnVec;

    double unrenderedChange = totalChange;

    // Vector to reference for what coins to return
    vector<double> changeValues {20., 10., 5., 1., .50, .25, .10, .05, .01};

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

        if (unrenderedChange < 0.01) // just covering my ass here from double tomfoolery
        {
            break;
        }
    }

    return changeReturnVec;
}