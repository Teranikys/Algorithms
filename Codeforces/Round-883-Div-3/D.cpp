#include <bits/stdc++.h>

#define int long long
#define double long double

using namespace std;

double space(double h, double d) {
    return h * d / 2.;
}

void solve() {
    int n;
    double d, h;
    cin >> n;
    cin >> d >> h;
    double ans = 0.;
    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) {
        ans += space(h, d);
        if (a[i] + h - a[i + 1] > 0) {
            ans -= space(a[i] + h - a[i + 1] , d * (a[i] + h - a[i + 1]) / h);
        }
    }
    ans += space(h, d);
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << fixed << setprecision(10);

    int t;
    cin >> t;
    while (t --> 0) {
        solve();
    }
    return 0;
}