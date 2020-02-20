// IndexAdd.cpp
// Make an int array and a target int, and find two indices of values in the array that add to the target int.
#include <iostream>
#include <map>

using namespace std;

// giving context to our returnInt's return size
#define RET_SIZE 2

int * sum(int * ary, const size_t length, const int target)
{
    int * returnInt = new int[RET_SIZE];

    // this map keeps a record of each int iterated over and its index. this is done via cache.insert later on
    map<int, int> cache = map<int, int>();

    for (int i = 0; i < length; i++)
    {
        int complement = target - ary[i];

        // this iterator attempts to find the value in the outside map that complements the current int in the array
        map<int, int>::iterator it = cache.find(complement);

        if (it != cache.end())
        {
            returnInt[0] = cache[complement];
            returnInt[1] = i;

            return returnInt; 
        }

        // insert the current int and its index for comparison
        cache.insert(pair<int, int>(ary[i], i));
    }

    // default case -- getting this means we failed to find two ints that qualify
    returnInt[0] = -1;
    returnInt[1] = -1;

    return returnInt;
}

int main()
{
    int pos_ints[] = {1,2,3,4,5,6,7,8,9};

    int target = 10;

    int * ret = sum(pos_ints, sizeof(pos_ints)/sizeof(*pos_ints), target);

    cout << "Indices of array that add to " << target << ":" << endl;

    for (int i = 0; i < RET_SIZE; i++)
    {
        cout << ret[i] << endl;    
    }

    return 0;
}