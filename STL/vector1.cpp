#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

int main()
{

    vector<int>vec;
    vec.push_back(34);
    vec.push_back(10);
    vec.push_back(11);

    cout << vec.size() << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    
    return 0;
}