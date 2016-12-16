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
    int sum = 0;
    while (cin >> s) {
        // input parse
        int p = s.find('x');
        int x = stoi(s.substr(0, p));
        int p1 = s.find('x', p+1);
        int y = stoi(s.substr(p+1, p1));
        int z = stoi(s.substr(p1+1));

        int xy = x+y;
        int xz = x+z;
        int yz = y+z;
        sum += 2*min({xy, xz, yz}) + x*y*z;
    }
    cout << sum << endl;
    return 0;
}
