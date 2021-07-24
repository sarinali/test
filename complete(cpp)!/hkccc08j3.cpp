#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, string> pils;
typedef pair<ll, int> piq;
int n, q, mx=0;
string nm; ll num, s, fq;
map<ll,string> book; map<ll, int> freq;
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nm >> num;
        book.insert(pils (num, nm));
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> s;
        if (!freq.count(s)) {
            freq.insert(piq(s, 1));
        } else {
            freq[s]++;
        }
    }
    for(auto elem : freq) {
        if (elem.second > mx) {
            fq = elem.first;
            mx = elem.second;
        }
    }
    cout << book[fq] << "\n";
    return 0;
}