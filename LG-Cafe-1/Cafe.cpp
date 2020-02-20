//Cafe.cpp

#include <iostream>
#include <string>
#include <vector>
#include "Cafe.h"

using namespace std;

int main()
{
    double money = 10.25;
    cout << "You have $" << money << endl;

    Cafe * cafe = new Cafe();
    money = cafe->TakeOrder(money);

    cout << "You now have $" << money << endl;

    cin.get();

    return 0;
}

double Cafe::TakeOrder(double money)
{
    string userChoice = "";
    int choiceIndex = 0;

    vector<string> menuVec = {"Coffee", "Tea", "Juice", "Scones"};

    vector<double> priceVec = {2.25, 1.95, 2.50, 3.00};

    cout << "Welcome to the cafe. Here is our menu:" << endl;

    for (int i = 0; i < menuVec.size(); i++)
    {
        cout << menuVec[i] << " " << priceVec[i] << endl;
    }

    bool validated[] = {false, false};

    while (!validated[0])
    {
        cout << "Please enter your choice:" << endl;

        cin >> userChoice;

        for (int j = 0; j < menuVec.size(); j++)
        {
            if (userChoice == menuVec[j])
            {
                validated[0] = true;
                choiceIndex = j;
                break;
            }
        }

        if (!validated[0])
        {
            cout << "Error: Invalid input. Please type your choice again." << endl;
        }
    }

    string quantityChoice;
    int qChoiceInt;

    while (!validated[1])
    {
        cout << "How many would you like?" << endl;

        cin >> quantityChoice;

        try
        {
            qChoiceInt = stoi(quantityChoice);

            if (money - (priceVec[choiceIndex] * qChoiceInt) > 0)
            {
                validated[1] = true;
                break;
            }
            else
            {
                cout << "You don't have enough money for that!" << endl;
            }
        }
        catch(invalid_argument const &e)
        {
            cout << "Error: Invalid input. Please type your choice again." << endl;
        }
        catch(out_of_range const &e)
        {
            cout << "Error: Invalid input. Please type your choice again." << endl;
        }
        
    }

    cout << "Here is your " << userChoice << "!" << endl;

    money -= priceVec[choiceIndex] * qChoiceInt;

    return money;
}