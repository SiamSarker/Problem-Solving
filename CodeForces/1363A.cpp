#include <iostream>
#include <vector>
using namespace std;

#define ll              long long
#define ull             unsigned long long
#define pb              push_back

int main()
{
    int t,n,x,a;
    cin>>t;
    while(t--)
    {
        int even = 0,odd = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 1)odd++;
            else even++;
        }
        
         if(odd) {
            if(even) {
                if(odd % 2 == 1) {
                    cout<<("Yes\n");
                }
                else {
                    if(x <= n - 1) {
                        cout<<("Yes\n");
                    }
                    else {
                        cout<<("No\n");
                    }
                }
            }
            else {
                if(x % 2 == 1 && x <= odd) {
                    cout<<("Yes\n");
                }
                else {
                    cout << ("No\n");
                }
            }
        }
        else {
            cout << ("No\n");
        }
    }
}