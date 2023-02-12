#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {-4, -1, 0, 3, 10};

    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = pow(nums[i], 2);
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    return 0;
}