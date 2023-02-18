#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {17, 18, 5, 4, 6, 1};

    int m = arr[arr.size() - 1];
    int n = 0;
    
    for (int i = arr.size()-1; i > 0; i--)
    {
        n = m;
        if (arr[i-1] >= m) m = arr[i-1];
        arr[i-1] = n;
    }

    arr[arr.size()-1]= -1;

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}