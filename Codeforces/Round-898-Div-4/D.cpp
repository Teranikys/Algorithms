#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int last_b = -1, ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (last_b == -1) {
                    last_b = i;
                } else if (i - last_b >= k) {
                    last_b = i;
                    ans++;
                }
            }
        }
        if (last_b != -1) {
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}