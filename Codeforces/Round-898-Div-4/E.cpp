#include <bits/stdc++.h>

#define int long long

using namespace std;

int bin(const vector<int>& a, int x, int l, int r) {
    int sum = 0;
    int m = (l + r) / 2;
    for (int i : a) {
        if (m  - i >= 0) {
            sum += m - i;
        }
    }
    if (r - l < 2) {
        return m;
    }
    if (sum > x) {
        return bin(a, x, l, m);
    } else {
        return bin(a, x, m, r);
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        int minim = INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            minim = min(a[i], minim);
        }
        cout << bin(a, x, minim, (int)10e9) << '\n';
    }
    return 0;
}