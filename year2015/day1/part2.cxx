#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int ctr(0);
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            ctr++;
        }
        else {
            ctr--;
            if (ctr < 0) {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    cout << ctr << endl;
    return 0;
}
