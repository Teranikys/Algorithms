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
        int n, k; cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        int sum = 0, ans = 0, j = 0;
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                sum = a[i];
                if (sum <= k) {
                    ans = i - j + 1;
                }
            } else if (b[i - 1] % b[i] == 0) {
                sum += a[i];
                while (sum > k) {
                    sum -= a[j++];
                }
                ans = max(ans, i - j + 1);
            } else {
                j = i;
                sum = a[i];
                if (sum <= k) {
                    ans = max(ans, i - j + 1);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}