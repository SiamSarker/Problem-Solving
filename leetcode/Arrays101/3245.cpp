#include <iostream>
#include <cmath>
#include <array>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 0, 2, 3, 0, 4, 5, 0};
    // vector<int> arr = {1,2,3};

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            for (int j = arr.size()-2; j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i + 1] = 0;
            i++;
        }
    }


    for (int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}