//ChangeMaker.h
#ifndef CHANGEMAKER_H
#define CHANGEMAKER_H

#include <vector>

class ChangeMaker
{
public:
    double GetTotalChange(double price, double paid);
    std::vector<double> GetChangeInCoins(double totalChange);
};

#endif