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
    string str;
    cin >> str;
    cout << count(str.begin(), str.end(), '<') << endl;
    
    return 0;
}