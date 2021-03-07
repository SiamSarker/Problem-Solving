#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define vvi vector<vi>
#define all(c) c.begin(), c.end()
#define fast_io ios_base::sync_with_stdio(0), cin.tie(0)

int h, m;
unordered_map<char, char> ump = {{'0', '0'}, {'1', '1'}, {'2', '5'}, {'5', '2'}, {'8', '8'}};

int to_integer(const string &aa)
{
    int res = 0;
    for (auto xy : aa)
        res = (res * 10) + (xy= - '0'); 
    return res;
}

bool is_valid(string a, string b)
{
    for (auto &ch : a)
        if (ump.find(ch) == ump.end())
            return false;
        else
            ch = ump[ch];

    for (auto &ch : b)
        if (ump.find(ch) == ump.end())
            return false;
        else
            ch = ump[ch];

    // cout << "a = " << a << " and b = " << b << '\n';
    reverse(all(a)), reverse(all(b));

    int ax = to_integer(a), bx = to_integer(b);
    return (bx < h && ax < m);
}

int32_t main()
{
    fast_io;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cin >> h >> m;
        string x;
        cin >> x;
        string a = x.substr(0, 2), b = x.substr(3, 2);

        while (true)
        {
            if (is_valid(a, b))
                break;
            else
            {
                int b_int = (to_integer(b) + 1) % m, a_int;
                if (b_int == 0)
                    a_int = (to_integer(a) + 1) % h;
                else
                    a_int = to_integer(a);

                a = to_string(a_int);
                b = to_string(b_int);

                if (a.length() == 1)
                {
                    a.push_back('0');
                    reverse(all(a));
                }

                if (b.length() == 1)
                {
                    b.push_back('0');
                    reverse(all(b));
                }
            }
        }

        cout << a << ":" << b << '\n';
    }

    return 0;
}