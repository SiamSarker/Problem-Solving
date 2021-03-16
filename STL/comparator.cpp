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

using namespace std;


class Interval {
public:
    int start, end;

    Interval(int _start, int _end) {
        start = _start;
        end = _end;
    }
};

class cmp {
    int operator() (Interval a, Interval b)
    {
        if (a.start < b.start) return true;
        else if (a.start > b.start) return false;
        else {
            if (a.end > b.end) return true;
            else return false;
        }
    }
};


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);


    priority_queue<Interval, vector<Interval>, cmp> pq;
    pq.push(Interval{2, 5});
    pq.push(Interval{2, 2});
    pq.push(Interval{5, 4});
    pq.push(Interval{5, 2});
    pq.push(Interval{5, 4});

    while (!pq.empty()){
        cout << pq.top().start << " " << pq.top().end << endl;
        pq.pop();
    }

    return 0;
}