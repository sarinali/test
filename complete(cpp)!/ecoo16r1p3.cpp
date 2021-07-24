#include <bits/stdc++.h>
using namespace std;
// const int M = 1e3;
int n, q;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    for (int i = 0; i < 10; i++) {
        cin >> n;
        // int cnt=0;
        vector<int> ar;
        for (int j = 0; j < n; j++) {
            cin >> q;
            ar.push_back(q);
        }
        int cost =0;
        for (int j = n-1; j >=1; j--) {
            // int cur = ar.find(j), nxt = ar[j+1];
            auto cur = find(ar.begin(), ar.end(), j), nxt = find(ar.begin(), ar.end(), j+1);
            if (cur > nxt) {
                ar.erase(cur);
                ar.insert(ar.begin(), j);
                cost+=cur-ar.begin();
            }
        }
        cout << cost << "\n";
        // while (curc > 0) {
        //     if (!branch.empty() && branch.top() == curc) {
        //         // int t = branch.top();
        //         // fin.push(t);
        //         branch.pop();
        //         curc--; cnt++;
        //     } else if (!ar.empty() && ar.top() == curc) {
        //         // int t = ar.top();
        //         // fin.push(t);
        //         ar.pop();
        //         curc--; cnt++;
        //     } else if (!ar.empty()) {
        //         int t = ar.top();
        //         branch.push(t); ar.pop();
        //     }
        // }
        // cout << cnt << "\n";
    }
    return 0;
}