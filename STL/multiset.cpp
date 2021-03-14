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
#include <stack>
#include <queue>

using namespace std;

int main()
{
    multiset <int> s;
    multiset <int>::iterator it;

    s.insert(1000);
    s.insert(1000);
    s.insert(1000);

    for(it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}