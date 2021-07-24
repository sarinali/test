#include <bits/stdc++.h>
using namespace std;
typedef pair<string, int> pi;
const int ME = 500, MN = 100;
int n, s, q, a, d;
string name;
pi vets[ME], nemp[MN];
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name >> s;
        vets[i] = make_pair(name, s);
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> a >> d;
        int diff=INT_MAX; string sug = "No suitable teacher!";
        for (int j = 0; j < n; j++) {
            int sc = vets[j].second;
            if (sc>a && sc-a<=d) {
                if (sc-a < diff) {
                    diff=sc-a; sug=vets[j].first;
                }
            }
        }
        cout << sug << "\n";
    }
    return 0;
}