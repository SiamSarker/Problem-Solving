#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    5 == 4 ? cout << "YES\n" : cout << "NO\n";

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}