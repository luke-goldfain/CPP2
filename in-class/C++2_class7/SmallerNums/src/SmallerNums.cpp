#include <vector>
#include <iostream>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>& nums) 
{
    vector<int> returnVector;

    for (int i = 0; i < nums.size(); i++)
    {
        int nextNumToPush = 0;

        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] < nums[i])
            {
                nextNumToPush++;
            }
        }

        returnVector.push_back(nextNumToPush);
    }     

    return returnVector;
}

int main()
{
    vector<int> inputNums {10, 7, 8, 2, 4, 9};

    vector<int> outputNums = smallerNumbersThanCurrent(inputNums);

    cout << "[ ";

    for (int i = 0; i < outputNums.size(); i++)
    {
        cout << outputNums[i] << " ";
    }

    cout << "]" << endl;

    return 0;
}