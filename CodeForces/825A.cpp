#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int a, b, count = 0;
    cin >> a;
    cin >> b;
    string str = to_string(b);

    int i = 0;
    while (i < a)
    {
        if (str[i] == '0' && count == 0)
            cout << '0' ;
        else if (str[i] == '1')
        {
            while(str[i]!='0' && i < a)
            {
                count++;
                i++;
            }
            cout << "hello";
            if(count > 0)
            {
                cout << count;
                i++;
            }
            count = 0;
        }
        i++;
    }

    return 0;
}