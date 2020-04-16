//ChangeMaker.h
#ifndef CHANGEMAKER_H
#define CHANGEMAKER_H

class ChangeMaker
{
public:
    double GetTotalChange(double price, double paid);
    vector<double> GetChangeInCoins(double totalChange);

}