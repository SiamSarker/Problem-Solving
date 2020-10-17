#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    //for faster like scan and prinf use these lines
    //faster io
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("vector1.txt", "r", stdin);

    vector <int> v;
    v.assign(10, 5); // 5 in 10 index
    v.push_back(6);
    v.push_back(7);
    v.push_back(32);
    v.pop_back(); // delete from last index like stack
    v.push_back(3);

    cout << v.size() << endl;
    
    for(auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;


    return 0;
}