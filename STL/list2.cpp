#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>

using namespace std;

int main()
{
    list <int> mylist(4, 2);
    list <int>::iterator it;
    
    

    for (it = mylist.begin(); it!=mylist.end() ; it++)
    {
        cout << *it << endl;
    }
    

   
   
    return 0;
}