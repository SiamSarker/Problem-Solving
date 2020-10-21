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
    set <int> st;
    int n, x; cin >> n;
    for (auto i = 0; i<n; i++) 
    {

        int temp ;
        cin >> temp;
        st.insert(temp);
    }

    for(int x : st)
        cout << x << " ";
    cout << endl;

    cin >> x;
    st.erase(x);

    for(int x : st)
        cout << x << " ";
    cout << endl;
    
    return 0;
}