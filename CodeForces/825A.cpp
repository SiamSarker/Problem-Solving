#include <iostream>
using namespace std;

int main(void)
{
    int a;
    string str;
    cin >> a;
    cin >> str;
    int i = 0;
    while (i < a)
    {
        int count = 0;

        while (i < a) {
            if (str[i] == '1') {
                count++;
            }
            else {
                cout << count;
                count = 0;
            }
            i++;
        }
        cout << count << endl;
    }
    
    return 0;
}