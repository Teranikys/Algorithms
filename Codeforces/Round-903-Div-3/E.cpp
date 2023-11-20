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
    vi a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vi ans(n);
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] + i + 1 == n) {
            ans[i] = 0;
        } else if (a[i] + i + 1 > n) {
            if (i + 1 >= n) {
                ans[i] = 1;
            } else {
                ans[i] = ans[i + 1] + 1;
            }
        } else {
            ans[i] = min(ans[i + a[i] + 1], ans[i + 1] + 1);
        }
    }
    cout << ans[0] << '\n';
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