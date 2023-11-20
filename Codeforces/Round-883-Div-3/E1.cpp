#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n; cin >> n;
    bool flag = false;
    for (int i = 2; i * i <= n; i++) {
        int sum = 1 + i;
        int pow = i;
        while (sum <= n) {
            if (sum == n) {
                flag = true;
                break;
            }
            pow *= i;
            sum += pow;
        }
        if (flag) {
            break;
        }
    }
    if (flag) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    while (t --
           \
                 \
                  \
                   \
                    \
                      > 0) {
        solve();
    }
    return 0;
}