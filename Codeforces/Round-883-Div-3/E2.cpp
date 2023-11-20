#include <bits/stdc++.h>

#define int long long

using namespace std;

set<uint64_t> used;

void preproccessing() {
    for (int64_t k = 2; k <= (int64_t)1e6; ++k) {
        int64_t val = 1 + k;
        int64_t p = k * k;
        for (int64_t cnt = 3; cnt < 64; ++cnt) {
            val += p;
            if (val > (int64_t)1e18) break;
            used.insert(val);
            if (p > (int64_t)1e18 / k) break;
            p *= k;
        }
    }
}

void solve() {
    int n; cin >> n;
    bool flag = false;
    if (used.count(n)) {
        flag = true;
    } else if (n > 6) {
        int d = 4 * n - 3;
        int sq = -1;
        int sqd = (int)sqrt(d);
        for (int i = max(1ll, sqd - 5); i <= sqd + 5; ++i) {
            if (i * i == d) {
                sq = i;
                break;
            }
        }
        if (sq != -1 and (sq - 1) % 2 == 0 and (sq - 1) / 2 > 1) flag = true;
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
    preproccessing();

    int t;
    cin >> t;
//    t = 1;
    while (t --> 0) {
        solve();
    }
    return 0;
}