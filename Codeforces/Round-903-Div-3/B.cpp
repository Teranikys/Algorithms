#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

bool check(const vi &a){
    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] != a[i + 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    if (check(a)) {
        cout << "YES" << '\n';
        return;
    }
    for (int i = 0; i < 3; ++i) {
        sort(a.begin(), a.end(), [](auto a, auto b){return a > b;});
        int old = a[0];
        a[0] -= a[a.end() - a.begin() - 1];
        a.emplace_back(old - a[0]);
        if (check(a)) {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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