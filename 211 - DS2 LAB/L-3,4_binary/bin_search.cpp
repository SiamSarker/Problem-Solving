#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;

float abso(float x) 
{
    if(x>=0) return x;
    else return -x;
}

float sqroot(float x) 
{
    float L = 0;
    float H = x;
    float result = 0;
    float mid;
    while(1)
    {
        mid = (L+H)/2;
        if(abso(mid*mid-x) < 0.00001)
        {
            result = mid;
            break;
        }
        else if(mid*mid > x)
            H = mid;
        else 
            L =mid;
    }
    return result;
}


int main()
{
    float n;
    cin >> n;
    cout << sqroot(n) << endl;
}