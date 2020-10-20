#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ifstream fin("file1.txt");
    int a, b;
    if (fin.is_open())
    {
        cout << "File exist" << endl;
        fin >> a >> b;
        cout << a+b << endl;
    }
    else
    {
        cout << "File does not exist" << endl;
    }
    

    return 0;
}