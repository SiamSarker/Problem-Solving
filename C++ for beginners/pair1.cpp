#include <iostream>
#include <fstream>
#include <set>
#include <iterator>
#include<algorithm>
#include<vector>
#include<string>
#include <list>
#include <utility> 
using namespace std;

// struct Pair{
//     int a;
//     char b;
// };

int main()
{
    // pair<pair<int, char>, pair<int, string>> p;
    // cin >> p.first >> p.second;
    // cout << p.first << endl;

    vector <pair<int,int> > v;
    int n; cin >> n;
    for (int i=0;i<n;i++)
    {
        int a,b; cin >> a >> b;
        v.push_back(make_pair(a,b));

    }

    for (pair<int,int>p : v)
        cout << p.first << " " << p.second << endl;
    

    return 0;
}