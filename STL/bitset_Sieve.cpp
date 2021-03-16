#include <iostream>
#include <stdio.h>
#include <string>
#include <list>
#include <queue>
#include <iterator>
#include <algorithm>
#include <map>
#include<utility>
#include<set>
#include <stack>
#include <queue>

using namespace std;

bitset<10000> bs;
vector<int> primes;

void sieve(long long upper_bound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    primes.push_back(2);
    for (long long i= 3; i<=upper_bound+1; i+=2) {
        if (bs[i])
        {
            for (long long j = i*i; j <= upper_bound+1 ; j+=i) {
                bs[j] = 0;
            }
            primes.push_back((int) i);
        }
    }

}

int main()
{
    sieve(1000);
    cout << "Hello World" << endl;
}