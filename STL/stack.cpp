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

using namespace std;

int main()
{
    stack <string> s;

    s.push("Siam");
    s.push("Anik");
    s.push("Foyaz");

    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;

    while(!s.empty())
    {
        string x;
        x = s.top();
        cout << x << endl;
        s.pop();
    }


    return 0;
}