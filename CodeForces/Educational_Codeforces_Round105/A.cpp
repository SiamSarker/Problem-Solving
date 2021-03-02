#include <iostream>
using namespace std;
typedef long long ll;

int main()
{   
  int n;
  cin >> n;
  while (n--)
  {
     string s;
     cin >> s;

     if(s[0] == s[s.size()-1]) {
            cout<<"NO"<<endl;
     }

     

     else {    
     int tem = 0;
     int a = 0,b = 0, c = 0;
     for (int i = 0; i < s.size(); i++)
     {
          if(s[i]=='A')
              a++;
          
          else if (s[i]=='B')
              b++;
        
          else
              c++;
          
     }


     char ch;

     if(a>=b&&a>=c){
         ch='A';
     }
      if(b>=a&&b>=c){
         ch='B';
     }
      if(c>=a&&c>=b){
         ch='C';
     }
     

     for (int i = 0; i < s.size(); i++)
     {
          if(s[i]==ch){
              tem++;
          }
          else{
              tem--;
          }
           
     }

     if(tem==0){
         cout<<"YES"<<endl;
     }
     else{
         cout<<"NO"<<endl;
     }

     }
      
  }
  
}