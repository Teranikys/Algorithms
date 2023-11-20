#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

bool is_prime(int n){
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n; cin >> n;
    map<int, int> m;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        for (int j = 2; j * j <= x; ++j) {
            while (x % j == 0) {
                m[j]++;
                x /= j;
            }
        }
        if (x > 1) m[x]++;
    }
    for (auto elem: m) {
        if (elem.second % n != 0) {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
//    t = 1;
    while (t-- > 0) {
        solve();
    }
    return 0;
}