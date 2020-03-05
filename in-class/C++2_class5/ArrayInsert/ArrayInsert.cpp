//ArrayInsert.cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int removalAry[] = {0, 24, 15, 66, 2};

    string removeIndex;

    for (int i = 0; i < sizeof(removalAry)/sizeof(removalAry[0]); i++)
    {
        cout << removalAry[i] << " ";
    }

    cout << endl << "Enter the index of the array you would like to remove:" << endl;

    cin >> removeIndex;

    int i_remIndex;

    int i_removedVal;

    try 
    {
        i_remIndex = stoi(removeIndex);
    }
    catch(invalid_argument const &e)
    {
        i_remIndex = 3;
    }

    for (int i = 0; i < sizeof(removalAry)/sizeof(removalAry[0]); i++)
    {
        if (i == i_remIndex)
        {
            i_removedVal = removalAry[i];

            removalAry[i] = NULL;
        }
    }

    cout << "Removed value at index " << i_remIndex << " is: " << i_removedVal << endl;

    for (int i = 0; i < sizeof(removalAry)/sizeof(removalAry[0]); i++)
    {
        cout << removalAry[i] << " ";
    }

    cout << endl;

    system("pause");
}