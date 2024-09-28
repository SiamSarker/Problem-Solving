#include <iostream>
using namespace std;

int TOH(int n, char src, char dest, char tmp1,char tmp2)
{
///if you have only 1 disk left then directly move the disk from src to dest i.e. 1 move required
    if(n==1)
    {
        return 1;
    }
    else
    {

        int friend1moves=TOH(n-2, src, tmp1, tmp2,dest);
        cout<<friend1moves<<endl;

        int friend2moves=TOH(n-3,src,tmp2,tmp1,dest);
        cout<<friend2moves<<endl;
        int mymove=TOH(1,src,dest,tmp1,tmp2);
        cout<<mymove<<endl;
        int friend4moves=TOH(n-2,tmp2,dest,tmp1,src);
        cout<<friend4moves<<endl;

        int friend3moves=TOH(n-3,tmp2,dest,tmp1,src);
        cout<<friend3moves<<endl;

        int totalmoves=friend1moves+mymove+friend2moves+friend3moves+friend4moves;
        return totalmoves;
    }
}
int main()
{
    cout << TOH(6, 'S', 'D', 'T' , 'R' ) << endl;
    return 0;
}