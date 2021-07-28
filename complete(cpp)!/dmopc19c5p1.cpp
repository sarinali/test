#include <bits/stdc++.h>
using namespace std;
typedef pair<string, bool> pi;
int n, m, fin=0;
map<string, bool> mp;
void check(int q, vector<string> h) {
    for (int i = 0; i < h.size(); i++) {
        if (!mp.count(h[i])){
            return;
        }
    }
    fin++;
    return;
}
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s; mp.insert(pi (s, true));
    }
    for (int i = 0; i < m; i++) {
        int q; vector<string> v;
        cin >> q; 
        for (int j = 0; j < q; j++) {
            string h;
            cin >> h; v.push_back(h);
        }
        check(q, v);
    }
    cout << fin << "\n";
    return 0;
}