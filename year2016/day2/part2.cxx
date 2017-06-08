#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

const char keypad[5][5] = {
    { 0,   0,  '1',  0,   0 },
    { 0,  '2', '3', '4',  0 },
    {'5', '6', '7', '8', '9'},
    { 0,  'A', 'B', 'C',  0 },
    { 0,   0,  'D',  0,   0 }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while (cin >> s) {
        int x(1), y(1);
        for (char c : s) {
            switch (c) {
                case 'U':
                    if (y > 0 && keypad[y-1][x]) {
                        y--;
                    }
                break;
                case 'R':
                    if (x < 4 && keypad[y][x+1]) {
                        x++;
                    }
                break;
                case 'D':
                    if (y < 4 && keypad[y+1][x]) {
                        y++;
                    }
                break;
                case 'L':
                    if (x > 0 && keypad[y][x-1]) {
                        x--;
                    }
                break;
            }
        }
        cout << keypad[y][x];
    }
    return 0;
}
