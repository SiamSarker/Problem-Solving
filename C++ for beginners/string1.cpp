#include<iostream>
using namespace std;

int main()
{
    string a = "Siam";
    string b = "Sarker";

    string c = a;
    reverse(c.begin(),c.end());
    cout << c << endl;
    sort(c.begin(), c.end());
    cout << c << endl;


    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i];
    }
    cout << "\n";


    return 0;
}