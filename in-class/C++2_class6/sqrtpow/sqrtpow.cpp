#include <iostream>

using namespace std;

double sqrt(double entry)
{
    if (entry <= 0)
    {
        return 0;
    }

    double returnRoot = 0;

    while (returnRoot * returnRoot < entry)
    {
        returnRoot++;
    }

    while (returnRoot * returnRoot > entry)
    {
        returnRoot -= 0.1;
    }

    // Makes sure we round up or down correctly
    while (returnRoot * returnRoot < entry && (returnRoot + 0.01) * (returnRoot + 0.01) - entry < entry - (returnRoot * returnRoot))
    {
        returnRoot += 0.01;
    }

    // Could keep getting more precise but I'm stopping at 2 decimal places

    return returnRoot;
}

double pow(double entry, int power)
{
    double returnPow = 1;

    for (int i = 0; i < power; i++)
    {
        returnPow *= entry;

        if (power - i < 1)
        {
            // if we could accept fractional powers, something cool would happen here I assume
        }
    }

    return returnPow;
}

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

    double result = sqrt(choiceNum);

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

    result = pow(choiceNum, powChoiceNum);

    cout << choiceNum << " to the power of " << powChoiceNum << " is " << result << endl;

    return 0;
}