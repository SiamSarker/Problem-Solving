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
    multimap <string, int> m;
    multimap <string, int>::iterator it;

    m.insert(make_pair("Siam", 43));
    m.insert(make_pair("Siam", 23));
    m.insert(make_pair("Siam", 26));

    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}