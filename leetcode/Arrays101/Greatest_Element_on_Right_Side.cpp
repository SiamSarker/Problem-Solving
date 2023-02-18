#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {17, 18, 5, 4, 6, 1};

    int m = 0;
    
    for (int i = 0; i < arr.size()-1; i++)
    {
        // m = arr[i+1];
        // for (int j = i+1; j < arr.size(); j++)
        // {
        //     if (arr[j] >= m) {
        //         m = arr[j];
        //     } 
        // }
        // arr[i] = m;
        arr[i] = *max_element(arr.begin()+i+1, arr.end());
    }

    arr[arr.size()-1]= -1;

    

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}