#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    int arr[5] = {5, 2, 1, 6, 3};

    list<int>mylist(arr, arr+5);
    list<int>::iterator it;

    it = find(mylist.begin(), mylist.end(), 6);

    mylist.insert(it, 7);

    for (it = mylist.begin(); it!=mylist.end() ; it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
    

   
   
    return 0;
}