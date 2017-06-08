#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    int i = 0;
    while(cin >> a >> b >> c) {
        if (a + b <= c) {
            continue;
        }
        if (a + c <= b) {
            continue;
        }
        if (c + b <= a) {
            continue;
        }
        i++;
    }
    cout << i;
    return 0;
}
