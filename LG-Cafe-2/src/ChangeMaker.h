//ChangeMaker.h
#ifndef CHANGEMAKER_H
#define CHANGEMAKER_H

#include <vector>

class ChangeMaker
{
private:
    // Vector to reference for what coins to return
    std::vector<float> changeValues {20.f, 10.f, 5.f, 1.f, .50f, .25f, .10f, .05f, .01f};
public:
    float GetTotalChange(float price, float paid);
    std::vector<float> GetChangeInCoins(float totalChange);
};

#endif