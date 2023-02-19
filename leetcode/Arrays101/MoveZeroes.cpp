#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {0,1,0,3,12};

    int write = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[write++] = nums[i];
        } 
    }

    for(int j=write; j < nums.size(); j++)
    {
        nums[j] = 0;
    }

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}