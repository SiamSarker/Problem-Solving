#include <iostream>
#include <fstream>
#include <set>
#include <iterator>
#include<algorithm>
#include<vector>
#include<string>
#include <list>
#include <utility> 
#include <map>

using namespace std;

int main()
{
    map <string, int> mp;
    int n; cin >> n;
    while(n--)
    {
        int x; cin >> x;
        string ac_no; cin >> ac_no;
        int amount;
        if(x == 1)
        {
            cin >> amount;
            mp[ac_no] += amount;
        }
        else cout << ac_no << " " << mp[ac_no] << endl;

    }


    return 0;
}