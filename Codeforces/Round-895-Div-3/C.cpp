#include <bits/stdc++.h>

using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    if ((r >= 4) && (r != l || (r % 2 == 0))) {
        for (int i = l; i <= r; i++) {
            if ((i % 2 == 0) && (i - 2 != 0)) {
                cout << 2 << " " << i - 2 << endl;
                break;
            }
        }
    } else {
        bool flag = false;
        for (int i = 3; i < sqrt(l) + 1; i++) {
            if ((l - i) % i == 0) {
                cout << i << " " << l - i << endl;
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << -1 << endl;
        }
    }
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