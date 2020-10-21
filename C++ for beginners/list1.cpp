#include <iostream>
#include <fstream>
#include <set>
#include <iterator>
#include<algorithm>
#include<vector>
#include<string>
#include <list>

using namespace std;

int main()
{
    list<int>List;
    int n; cin >> n;
    for (int i= 0; i<n;i++)
    {
        int temp;cin >> temp;
        List.push_back(temp);
        //List.push_front(temp); for showing in first
    }

    cout << List.back() << endl;
    cout << List.front() << endl;
    List.pop_front();
    cout << List.front() << endl;

    for (int i:List) cout << i << " ";
    cout << endl;


    return 0;
}