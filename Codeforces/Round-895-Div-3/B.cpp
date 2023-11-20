#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, d, s;
    int ans = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> d >> s;
        if ((d + ceil(s / 2.) - 1) < ans) {
            ans = (int)(d + ceil(s / 2.) - 1);
        }
    }
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
