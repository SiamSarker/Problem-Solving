#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {17, 18, 5, 4, 6, 1};

    for (int i = 0; i < arr.size()-1; i++)
    {
        for (int j = i+1; j < arr.size()-i; j++)
        {
            if (arr[j] >= arr[i])
                arr[i] = arr[j];
        }
    }

    arr[arr.size()-1] = -1;

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}