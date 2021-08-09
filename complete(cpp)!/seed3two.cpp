// o(n) solution

#include <bits/stdc++.h>
using namespace std;
const int M = 1e5;
int ar[M+2], diff[M+2], u, n, k, cnt=0;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> u >> n >> k;
    for (int i = 0; i < k; i++) {
        int l, r, val;
        cin >> l >> r >> val;
        diff[l]+=val;
        diff[r+1]+=-val;
    }
    ar[1] = diff[1];
    for (int i = 1; i <= u; i++) {
        if (i > 1) {
            ar[i] = diff[i] + ar[i-1];
        }
        if (ar[i] < n) {
            cnt++;
        }
    }
    cout << cnt << "\n";
    return 0;
}