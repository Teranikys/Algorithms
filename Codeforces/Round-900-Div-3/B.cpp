#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    a[0] = 2;
    a[1] = 3;
    for (int i = 2; i < n; i++) {
        a[i] = a[i - 1] + 4;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << '\n';
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