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
    int i = count(s.begin(), s.end(), '(');
    cout << 2*i - s.size() << endl;
    return 0;
}
