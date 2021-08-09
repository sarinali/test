// o(n^2) solution

#include <bits/stdc++.h>
using namespace std;
const int M = 1e5;
int ar[M+2], u, n, k, cnt=0;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> u >> n >> k;
    // if anything in range of i smaller than n
    for (int i = 0; i < k; i++) {
        int x, y, r;
        cin >> x >> y >> r;
        for (int j = x; j <= y; j++) {
            ar[j]+=r;
        }
    }
    for (int i = 0; i < u; i++) {
        if (ar[i] < n) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}