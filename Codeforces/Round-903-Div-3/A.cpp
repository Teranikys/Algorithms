#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int cnt = 0;
    if (x.find(s) != x.npos) {
        cout << cnt << '\n';
        return;
    }
    while (x.size() <= n * m) {
        x += x;
        cnt++;
        if (x.find(s) != x.npos) {
            cout << cnt << '\n';
            return;
        }
    }
    cout << -1 << '\n';
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