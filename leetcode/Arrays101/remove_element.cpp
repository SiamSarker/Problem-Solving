#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int val = 3;
    vector<int> nums = {3,2,2,3};
    
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    
    for (int i = 0; i < nums.size(); i++) 
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}