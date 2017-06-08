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
    int x(0), y(0);
    st.insert(mp(x, y));
    string s;
    while(cin >> s) {
        for (int i = 0; i < s.size(); ++i) {
            switch(s[i]) {
                case '<':
                    x--;
                    break;
                case '>':
                    x++;
                    break;
                case '^':
                    y++;
                    break;
                case 'v':
                    y--;
                    break;
            }
            if (st.count(mp(x, y)) == 0)
                st.insert(mp(x, y));
        }
    }
    cout << st.size() << endl;
    return 0;
}
