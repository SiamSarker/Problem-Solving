#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>

using namespace std;

int count(int A[], int low, int high)
{
    int n = high - low + 1;

    if (A[high] == 0) return 0;

    if (A[low] == 1) return n;

    int mid = (low+high) / 2;

    return count(A, low, mid) + count(A, mid+1, high);
}
 
int main()
{
    int A[] = { 0, 0, 0, 0, 1, 1, 1 };
    int n = sizeof(A) / sizeof(A[0]);
 
    cout << count(A, 0, n-1) << endl;
 
    return 0;
}