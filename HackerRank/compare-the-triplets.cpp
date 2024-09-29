#include <bits/stdc++.h>

using namespace std;

#define LOCAL

int main()
{
#ifdef LOCAL
    ifstream input("input.txt");
    cin.rdbuf(input.rdbuf());  // Redirect cin to read from input file
#endif

    int alice[3], bob[3];

    for (int i = 0; i < 3; i++) {
        cin >> alice[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> bob[i];
    }

    int alice_score = 0, bob_score = 0;

    for (int i = 0; i < 3; i++) {
        if (alice[i] > bob[i]) {
            alice_score++;
        } else if (alice[i] < bob[i]) {
            bob_score++;
        }
    }

    cout << alice_score << " " << bob_score << endl;

    return 0;
}
