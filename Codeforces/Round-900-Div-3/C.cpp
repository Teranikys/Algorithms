#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n, k, x; cin >> n >> k >> x;
    int lower_bound = ((n + n - k + 1) * k / 2);
    int upper_bound = ((1 + k) * k / 2);
    if (lower_bound < x || upper_bound  > x) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    while (t--) {
        solve();

    }
    return 0;
}