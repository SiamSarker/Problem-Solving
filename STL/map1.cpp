#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    map<string, int>m;
    map<string, int>::iterator it;


    m["Siam"] = 43;
    m["Anik"] = 34;
    m["Elon"] = 64;
    m["Antik"] = 47;
    m["akash"] = 47;

    m.insert(make_pair("naabil", 41));

    
    for (it=m.begin(); it!=m.end(); it++)
    {
        cout << it->first<<" "<<it->second <<endl;
    }


    

    return 0;
}