#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

vector<int> FindAllPrimesBelow(int val);

int main()
{
    std::cout << "This program will find all prime numbers below the entered number." << std::endl;
    std::cout << "Please enter a number: ";

    int value = -1;
    
    std::cin >> value;

    while (std::cin.fail())
    {
        std::cout << "You have not entered a positive integer. Please try again: ";
        std::cin >> value;

        if (!std::cin.fail())
        {
        	break;
        }
    }

    std::cout << "Here is a list of all primes below " << value << ":" << std::endl;

    vector<int> returnedVector = FindAllPrimesBelow(value);

    for (int i = 0; i = returnedVector.size(); i++)
    {
        std::cout << returnedVector[i] + " ";
    }

    string foo;

    getline(cin, foo);

    return 0;
}

vector<int> FindAllPrimesBelow(int val)
{
    vector<int> returnVector;

    for (int i = 1; i < (val / 2); i++)
    {
        bool isPrime = true;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            returnVector.push_back(i);
        }
    }

    return returnVector;
}