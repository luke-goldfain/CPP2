#include "sqrtpow.hpp"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string choice;
    double choiceNum = 1;

    string powChoice;
    int powChoiceNum;

    cout << "Enter a positive number to get its square root" << endl;

    cin >> choice;

    try
    {
        choiceNum = stod(choice);
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }

    double result = calcSqrt(choiceNum);

    cout << "Square root of " << choiceNum << " is " << result;

    cout << endl << "Enter a number to calculate a power of it" << endl;

    cin >> choice;

    try
    {
        choiceNum = stod(choice);
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }

    cout << "Enter the exponent (positive integer only)" << endl;

    cin >> powChoice;

    try
    {
        powChoiceNum = stoi(powChoice);
    }
    catch(const exception& e)
    {
        cerr << e.what() << '\n';
    }

    result = calcPow(choiceNum, powChoiceNum);

    cout << choiceNum << " to the power of " << powChoiceNum << " is " << result << endl;

    return 0;
}