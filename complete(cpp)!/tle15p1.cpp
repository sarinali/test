#include <bits/stdc++.h>
using namespace std;
typedef pair<int, string> pi;
int n,p, ar[101][101];
string names[101]; pi fl[101];
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ar[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        int sum =0;
        for (int j = 0; j < p; j++) {
            sum+=ar[j][i];
        }
        fl[i] = make_pair(sum, names[i]);
    }
    sort(fl, fl+n);
    for (int i = 0; i < n; i++) {
        cout << i+3 << ". " << fl[(n-1)-i].second << "\n";
    }
    return 0;
}