#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    cin >> str;

// SiamSarker
cout << str.substr(0,4) << endl;
//Siam
cout << str.substr(4,6) << endl; // 2nd argument is for how many char you want stating from the first argument index
//Sarker
cout << str.size() << endl;

    return 0;
}