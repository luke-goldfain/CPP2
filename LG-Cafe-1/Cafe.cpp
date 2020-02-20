//Cafe.cpp

#include <iostream>
#include <string>
#include <vector>
#include "Cafe.h"

using namespace std;

int main()
{
    double money = 5.25;
    cout << money << endl;

    Cafe * cafe = new Cafe();
    money = cafe->TakeOrder(money);

    cout << "You now have " << money << endl;

    cin.get();

    return 0;
}

double Cafe::TakeOrder(double money)
{
    string userChoice = "";
    int choiceIndex = 0;

    //string menuAry[] = {"Coffee", "Tea", "Juice", "Scones"};
    vector<string> menuVec = {"Coffee", "Tea", "Juice", "Scones"};

    //double priceAry[] = {2.25, 1.95, 2.50, 3.00};
    vector<double> priceVec = {2.25, 1.95, 2.50, 3.00};

    cout << "Welcome to the cafe. Here is our menu:" << endl;

    for (int i = 0; i < menuVec.size(); i++)
    {
        cout << menuVec[i] << " " << priceVec[i] << endl;
    }

    bool validated = false;

    while (!validated)
    {
        cout << "Please enter your choice:" << endl;

        cin >> userChoice;

        for (int j = 0; j < menuVec.size(); j++)
        {
            if (userChoice == menuVec[j])
            {
                validated = true;
                choiceIndex = j;
                break;
            }
        }

        if (!validated)
        {
            cout << "Error: Invalid input. Please type your choice again." << endl;
        }
    }

    money -= priceVec[choiceIndex];

    return money;
}