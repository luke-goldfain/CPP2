//Cafe.h
#ifndef CAFE_H
#define CAFE_H
#include <string>

class Cafe
{
private:
    std::vector<std::string> menuVec = {"Coffee", "Tea", "Juice", "Scones"};
    std::vector<double> priceVec = {2.25, 1.95, 2.50, 3.00};
public:
    void TakeOrder();
    double CalculateTotalPrice(int quantity, int menuIndex);
};

#endif