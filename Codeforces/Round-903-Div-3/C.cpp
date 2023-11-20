#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

void solve() {
    int n; cin >> n;
    vector<string> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            int x = a[i][j], y = a[j][n - i - 1], z = a[n - i - 1][n - j - 1];
            int k = a[n - j - 1][i];
            int maxim = max(max(x, y), max(z, k));
            ans += maxim - x;
            ans += maxim - y;
            ans += maxim - z;
            ans += maxim - k;
        }
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
//    t = 1;
    while (t-- > 0) {
        solve();
    }
    return 0;
}