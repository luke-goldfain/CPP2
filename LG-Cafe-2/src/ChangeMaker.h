//ChangeMaker.h
#ifndef CHANGEMAKER_H
#define CHANGEMAKER_H

#include <vector>

class ChangeMaker
{
private:
    // Vector to reference for what coins to return
    std::vector<double> changeValues {20., 10., 5., 1., .50, .25, .10, .05, .01};
public:
    double GetTotalChange(double price, double paid);
    std::vector<double> GetChangeInCoins(double totalChange);
};

#endif