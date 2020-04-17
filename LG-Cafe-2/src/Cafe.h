//Cafe.h
#ifndef CAFE_H
#define CAFE_H
#include <string>

class Cafe
{
private:
    std::vector<std::string> menuVec = {"Coffee", "Tea", "Juice", "Scones"};
    std::vector<float> priceVec = {2.25f, 1.95f, 2.50f, 3.f};
public:
    void TakeOrder();
    float CalculateTotalPrice(int quantity, int menuIndex);
};

#endif