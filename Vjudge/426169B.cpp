#include <iostream>
using namespace std;
typedef long long ll;


int main()
{
   int n;
   cin>>n;
   if(n<=2){
      cout<<-1<<endl;

   }
   else{
      cout<<100<<" "<<100;

      for (int i = 1; i <=n-2; i++)
      {
          cout<<" "<<i;
      }
      cout<<endl;
      
   }

}