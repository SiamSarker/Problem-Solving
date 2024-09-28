#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;

int rotateCount(int A[], int n)
{
    int low = 0;
    int high = n-1;

    while(low <= high)
    {
        if (A[low] <= A[high]) return low;

        int mid = (high + low)/2;

        int next = (mid + 1) % n;
        int prev = (mid - 1 + n) % n;

        if ( A[mid] <= A[prev] && A[mid] <= A[next]) return mid;

        else if (A[mid] <= A[high]) high = mid - 1;

        else if(A[mid] >= A[low]) low = mid + 1;

    }
    
}

int main()
{

    int A[] = { 3, 4, 5, 6, 2 };
    int n = sizeof(A)/sizeof(A[0]);

    cout << rotateCount(A, n) << endl;


}