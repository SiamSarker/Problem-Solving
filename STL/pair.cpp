#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>
#include <map>
#include<utility>

using namespace std;

int main()
{
    // pair<string, int>p;
    // p.first = "Siam";
    // p.second = 21;

    // p = make_pair("Anik", 23);

    // cout << p.first << " " << p.second << endl;

    vector < pair<int, string> > v;
    vector < pair<int, string> > ::iterator it;

    v.push_back(make_pair(23, "Siam"));
    v.push_back(make_pair(20, "Anik"));
    v.push_back(make_pair(15, "Shanto"));

    for(it = v.begin();it!=v.end();it++)
    {
        cout << it->first<<" "<<it->second<<endl;
    }

    return 0;

}