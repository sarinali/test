#include <bits/stdc++.h>
using namespace std;
const int M = 1e5;
string ar[M+1];
int t,n;
map<string, vector<int> > mp;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> ar[i];
    }
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string h;
        cin >> h;
        if (!mp.count(h)) {
            vector<int> v; v.push_back(i);
            mp.insert(pair<string, vector<int> >(h,v));
        } else {
            mp[h].push_back(i);
        }
    }
    for (int i = 0; i < t; i++) {
        string cur = ar[i];
        int y = mp[cur].size();
        for (int j = 0; j < y; j++) {
            cout << mp[cur].at(j) << "\n";
        }
    }
    return 0;
}