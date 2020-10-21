#include <iostream>
#include <fstream>
#include <set>
#include <iterator>
#include<algorithm>
#include<vector>
#include<string>
#include <list>

using namespace std;

int mai()
{
    //freopen("set1_file.txt", "r", stdin);

    set <int> st;

    int n; cin >> n;
    for (int i = 0; i<n; i++)
    {
        int temp; cin >> temp;
        st.insert(temp);
    }

    cout << st.size() << endl;

    for(auto i : st)
        cout << i << " ";
    cout << endl;

    return 0;

}