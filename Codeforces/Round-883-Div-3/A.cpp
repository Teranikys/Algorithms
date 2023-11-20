#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n; cin >> n;
    int f, s, cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> f >> s;
        if (s < f) cnt++;
    }
    cout << cnt << '\n';

}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-->0) {
        solve();
    }
    return 0;
}