#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    int m = 3, n = 3;
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    

    for (int i = m, j = 0; i < nums1.size(); i++, j++)
    {
        nums1[i] = nums2[j];
    }

    sort(nums1.begin(), nums1.end());
    
    for (int i = 0; i < nums1.size(); i++) 
        cout << nums1[i] << " ";
    cout << endl;

    return 0;
}