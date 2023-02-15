#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int val = 3;
    vector<int> nums = {1,1,2};

    nums.erase( unique( nums.begin(), nums.end() ), nums.end() );
    
    
    for (int i = 0; i < nums.size(); i++) 
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}