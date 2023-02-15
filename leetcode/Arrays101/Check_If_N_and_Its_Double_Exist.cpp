#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {10,2,5,3};

    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size(); j++){
            if (i == j) continue;
            if (arr[i] == 2*arr[j]) return true;
        }
    }

    return false;
    
    
    // for (int i = 0; i < nums.size(); i++) 
    //     cout << nums[i] << " ";
    // cout << endl;

    return 0;
}