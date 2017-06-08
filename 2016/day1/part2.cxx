#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

set<pair<int, int>> pos;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int x(0), y(0);
    pos.insert(mp(x, y));
    int dx(1), dy(0);
    vector<pair<char, int>> instructions; 
    while (cin >> s) {
        int val = stoi(s.substr(1, s.size() - 1));
        switch (s[0]) {
            case 'R':
                swap(dx, dy);
                if (dy != 0)
                    dy = -dy;
            break;
            case 'L':
                swap(dx, dy);
                if (dx != 0)
                    dx = -dx;
            break;
        }
        int tx = x + dx*val;
        int ty = y + dy*val;
        do {
            x += dx;
            y += dy;
            auto pair = mp(x, y);
            if (pos.count(pair) > 0) {
                cout << abs(x) + abs(y) << endl;
                return 0;
            }
            pos.insert(pair);
        } while (x != tx || y != ty);
    }
    return 0;
}
