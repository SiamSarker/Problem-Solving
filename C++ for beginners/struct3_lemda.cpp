#include <stdio.h>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int main()
{
    
    freopen("struct2_file.txt", "r", stdin);

    int a, b; cin >> a >> b;
    auto sum = [&]()
    {
        return a+b;
    };
    
    cout << sum() << endl;
    return 0;
}