#include <bits/stdc++.h>

using namespace std;

void solve() {
    long long int n, x, y;
    cin >> n >> x >> y;
    long long int diff = floor((double)n / lcm(x, y));
    long long int plus = n / x - diff;
    long long int minus = n / y - diff;
    long long int ans = (n + n - plus + 1) * plus / 2 - (1 + minus) * minus / 2;
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }

    return 0;
}
