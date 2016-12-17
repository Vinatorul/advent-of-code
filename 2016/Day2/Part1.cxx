#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    string s;
    while (cin >> s) {
        x = 1;
        y = 1;
        for (char c : s)
            switch (c) {
                case 'U':
                    if (y > 0)
                        y--;
                break;
                case 'R':
                    if (x < 2)
                        x++;
                break;
                case 'D':
                    if (y < 2)
                        y++;
                break;
                case 'L':
                    if (x > 0)
                        x--;
                break;
            }
        cout << y*3 + x + 1;
    }
    return 0;
}
