#include<iostream>
#include<algorithm>
using namespace std;

bool is_vowel(char c){
    return c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'; 
}


int main()
{
    string str;
    getline(cin,str); // O(n)

    int vowel = 0;
    int cons = 0;

    for (char c : str)
    {
        cout << c;
        if(is_vowel(c)) vowel++;
        else cons++;
    }

    cout << "" << endl;
    cout << vowel << endl;
    cout << cons << endl;
    
    return 0;
}