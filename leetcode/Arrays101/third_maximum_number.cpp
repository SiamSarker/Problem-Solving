#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {2,2,3,1};

    int m1 = nums[0], m2 = 0, m3 = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1]) continue;
        if (nums[i] > m1) {
            m1 = nums[i];
            m3 = m2;
            m2 = m1;
        } 
    }

    cout << m1 << " " << m2 << " " << m3 << endl;

    
    

    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
}