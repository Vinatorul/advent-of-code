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
    int x(0), y(0);
    int dx(1), dy(0);
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
        x += dx*val;
        y += dy*val;
    }
    cout << abs(x) + abs(y) << endl;
    return 0;
}
