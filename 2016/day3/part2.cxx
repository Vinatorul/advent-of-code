#include <bits/stdc++.h>
using namespace std;

#define ifthen(x, y, z) (x ? y: z)
#define mp make_pair
#define mt make_tuple

const int INF = 1e9 + 1;

int check_tr(int a, int b, int c) {
    if (a + b <= c)
        return 0;
    if (a + c <= b)
        return 0;
    if (c + b <= a)
        return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a[3], b[3], c[3];
    int i = 0;
    while(cin >> a[0] >> a[1] >> a[2]) {
        cin >> b[0] >> b[1] >> b[2];
        cin >> c[0] >> c[1] >> c[2];
        for (int j = 0; j < 3; ++j)
            i += check_tr(a[j], b[j], c[j]);
    }
    cout << i;
    return 0;
}
