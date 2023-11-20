#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vi> field(n);
    for (int i = 0; i < n; ++i) {
        field[i] = vi(m, 0);
    }

    int x, y;
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        field[x - 1][y - 1] = -1;
    }

    int cnt;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] != -1) {
                cnt = 0;
                if (i > 0 and j > 0 and field[i - 1][j - 1] == -1) {
                    cnt++;
                }
                if (i > 0 and field[i - 1][j] == -1) {
                    cnt++;
                }
                if (i > 0 and j < m - 1 and field[i - 1][j + 1] == -1) {
                    cnt++;
                }
                if (j > 0 and field[i][j - 1] == -1) {
                    cnt++;
                }
                if (j < m - 1 and field[i][j + 1] == -1) {
                    cnt++;
                }
                if (i < n - 1 and field[i + 1][j] == -1) {
                    cnt++;
                }
                if (i < n - 1 and j > 0 and field[i + 1][j - 1] == -1) {
                    cnt++;
                }
                if (i < n - 1 and j < m - 1 and field[i + 1][j + 1] == -1) {
                    cnt++;
                }
                field[i][j] = cnt;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (field[i][j] == -1) {
                cout << "* ";
            } else {
                cout << field[i][j] << " ";
            }
        }
        cout << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
//    cin >> t;
    t = 1;
    while (t-- > 0) {
        solve();
    }
    return 0;
}