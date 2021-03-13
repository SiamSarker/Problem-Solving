#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>


using namespace std;

int main()
{


    int arr[5] = {5, 2, 1, 6, 3};

    sort(arr, arr+4);

    for (int i = 0; i<5; i++)
    {
        printf("%d\t", arr[i]);
    }
    cout << endl;

   
    return 0;
}