#include<iostream>
using namespace std;

int main()
{
    string a = "madam";
    string temp = a;
    
    reverse(temp.begin(),temp.end());
    
    if (a == temp)
        cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    
    return 0;
}