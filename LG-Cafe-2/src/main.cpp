#include <iostream>
#include <vector>
#include "Cafe.h"
#include "ChangeMaker.h"

int main()
{
    Cafe * cafe = new Cafe();
    cafe->TakeOrder();

    std::cin.get();

    return 0;
}