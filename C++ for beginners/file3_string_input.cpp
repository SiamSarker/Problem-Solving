#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

int main()
{
    ifstream fin("file2.txt");
    ofstream fout("fileoutput.txt");
    if (fin.is_open())
    {
        cout << "File exist" << endl;
        int n; fin >> n;
        vector <int> v(n);
        //v.resize(n);
        for (int i = 0; i < n; i++)
        {
            fin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++) fout << v[i] << " ";
        fout << endl;       

    }
    else
    {
        cout << "File does not exist" << endl;
    }
    

    return 0;
}