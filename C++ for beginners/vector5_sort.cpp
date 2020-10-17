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

    freopen("vector1.txt", "r", stdin);


    int n; cin >> n;
    //int arr[n];
    
    vector <int> v;

    v.resize(n);

    for(int i =0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n; i++) cout << v[i] << " ";

    cout << endl;

    sort(v.begin(), v.end());

    for(int i : v) cout << i << " ";

    cout << endl;

    sort(v.begin(), v.end(), greater< int >());

    for(int i : v) cout << i << " ";

    cout << endl;

    return 0;
}