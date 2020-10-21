#include <stdio.h>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

struct Student
{
    string name;
    string id;
};

bool compare(Student a, Student b)
{
    if (a.id == b.id) return a.name < b.name;
    else return a.id<b.id;
}


int main()
{
    
    freopen("struct_file.txt", "r", stdin);
    int n; cin >> n;
    vector <Student> v(n);
    for(int i =0; i < n; i++) cin >> v[i].name >> v[i].id;

    for(Student s : v)
        cout << s.name << " " << s.id << endl;
    
    sort(v.begin(), v.end(), compare);

    for(Student s : v)
        cout << s.name << " " << s.id << endl;
    
    return 0;
}