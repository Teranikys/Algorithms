#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    bool flag = false;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == k) {
            flag = true;
        }
    }
    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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