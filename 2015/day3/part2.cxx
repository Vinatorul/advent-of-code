#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

set<pair<int, int>> st;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x[2] = {0, 0};
    int y[2] = {0, 0};
    st.insert(mp(x[0], y[0]));
    string s;
    while(cin >> s) {
        for (int i = 0; i < s.size(); ++i) {
            switch(s[i]) {
                case '<':
                    x[i%2]--;
                    break;
                case '>':
                    x[i%2]++;
                    break;
                case '^':
                    y[i%2]++;
                    break;
                case 'v':
                    y[i%2]--;
                    break;
            }
            st.insert(mp(x[i%2], y[i%2]));
        }
    }
    cout << st.size() << endl;
    return 0;
}
