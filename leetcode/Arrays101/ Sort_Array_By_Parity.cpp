#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {3,1,2,4};
    vector<int> arr;

    int n = nums.size()-1;
    int m = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (n - m == 1) break;
        if (nums[i] % 2 == 0) {
            arr[m] = nums[i];
            m++;
        }
        if (nums[i] % 2 != 0) {
            arr[n] = nums[i];
            n--;
        } 
    }

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}