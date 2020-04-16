//Cafe.cpp

#include <iostream>
#include <string>
#include <vector>
#include "Cafe.h"
#include "ChangeMaker.h"

using namespace std;

int main()
{
    Cafe * cafe = new Cafe();
    cafe->TakeOrder();

    cin.get();

    return 0;
}

double Cafe::TakeOrder()
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

    bool validated[] = {false, false, false};

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

            validated[1] = true;
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

    double totalPrice = (double)quantityChoice * priceVec[choiceIndex];

    string payAmt;
    int payAmtInt;

    while (!validated[2])
    {
        cout << "How much would you like to pay? (integers only, please)" << endl;

        cin >> payAmt;

        try
        {
            payAmtInt = stoi(payAmt);

            if ((double)payAmtInt >= totalPrice)
            {
                validated[2] = true;
            }
            else
            {
                cout << "That's not enough! Please enter a higher number." << endl;
            }
            
        }
        catch(invalid_argument const &e)
        {
           cout << "Error: Invalid input. Please try again. (Integers only!)" << endl;
        }
        
    }

    cout << "Here is your " << userChoice << "!" << endl;

    // Change stuff
    ChangeMaker * chMaker = new ChangeMaker();

    double totalChange = chMaker->GetTotalChange(totalPrice, payAmtInt);

    vector<double> changeInCoins = chMaker->GetChangeInCoins(totalChange);

    cout << "Change received: ";

    for (int j = 0; j < changeInCoins.size(); j++)
    {
        cout << changeInCoins[j] << " ";
    }

    cout << endl;
}