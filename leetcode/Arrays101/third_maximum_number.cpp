#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {2,2,3,1};
    
    sort(nums.begin(), nums.end(), greater <>());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
}