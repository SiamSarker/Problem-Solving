#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>
#include <map>
#include<utility>
#include<set>

using namespace std;

int main()
{
    set <int> s;
    set <int>::iterator it;

    s.insert(10);
    s.insert(5);
    s.insert(13);
    s.insert(8);
    s.insert(37);

    s.erase(s.find(8));

    pair <set <int>::iterator, bool> p;
    p = s.insert(10);

    if (p.second == false){
        cout << "Can't insert" << endl;
    }
    else cout << "inserted" << endl;

    for(it = s.begin(); it!=s.end();it++)
    {
        cout<< *it <<" ";
    }
    cout << endl;


    return 0;
}