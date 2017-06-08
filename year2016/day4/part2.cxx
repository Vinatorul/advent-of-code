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
    while (cin >> s) {
        size_t p = s.find('-');
        size_t pos = 0;
        vector<int> counter(26, 0);
        while (p != string::npos) {
            for(; pos < p; ++pos) {
                counter[s[pos] - 'a']++;
            }
            pos = p+1;
            p = s.find('-', pos);
        }
        p = s.find('[');
        int ID = stoi(s.substr(pos, p-pos+1));
        priority_queue<int> pq;
        for (int &i : counter) {
            pq.push(i);
        }
        bool is_real = true;
        for (size_t i = p+1; i < s.size() - 1; ++i) {
            if (counter[s[i]-'a'] != pq.top()) {
                is_real = false;
                break;
            }
            pq.pop();
        }
        if (is_real) {
            for (size_t i = 0; i < pos; ++i) {
                if  (s[i] != '-') {
                    s[i] = (s[i] - 'a' + ID) % 26 + 'a';
                }
            }
            if (s.find("northpole-object-storage") != string::npos) {
                cout << ID << '\n';
                return 0;
            }
        }
    }
    return 0;
}
