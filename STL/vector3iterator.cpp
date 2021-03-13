#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main()
{

    vector<int>vec;
    vector<int>::iterator it;

    // vector<double>vec1;
    // vector<double>::iterator it2;
    // it2 = vec1.begin();

    // vector<char> vec3;
    // vector<char>::iterator it3;
    // it3 = vec3.begin();

    
    for (int i = 0; i <= 5; i++)
    {
        vec.push_back(i);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\t";
    }
    puts("");

    for (it = vec.begin(); it!=vec.end() ;it++ )  // vec.end() mean last element ar next space
    {
        cout << *it << endl;
    }
    
    return 0;
}