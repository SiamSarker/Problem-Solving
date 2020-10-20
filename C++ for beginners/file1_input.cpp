#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ifstream fin("file1.txt");
    if (fin.is_open())
    {
        cout << "File exist" << endl;
    }
    else
    {
        cout << "File does not exist" << endl;
    }
    

    return 0;
}