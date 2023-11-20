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
        int n; cin >> n;
        vector<int> a(n);
        int min = INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] < min) {
                min = a[i];
            }
        }
        int ans = 1;
        bool flag = false;
        for (int i = 0; i < n; i++){
            if (a[i] == min && !flag) {
                ans *= (a[i] + 1);
                flag = true;
            } else {
                ans *= a[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}