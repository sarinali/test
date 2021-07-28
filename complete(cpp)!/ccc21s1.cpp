#include <bits/stdc++.h>
using namespace std;
//(a+b)/2 * h
const int M = 1e4;
int n;double a=0;
double sides[M+2], height[M+1];
int main() {
    cin.tie(0); cin.sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n+1; i++) {
        cin >> sides[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> height[i];
        double area = (sides[i] + sides[i+1])/2 * height[i];
        a+=area;
    }
    printf("%.1f\n", a);
    return 0;
}