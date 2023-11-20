#include <bits/stdc++.h>

typedef long long ll;
#define isz(x) int((x).size())

using namespace std;

void solve() {
    ll n, q;
    cin >> n;
    vector<ll> a(n + 1);
    a[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    string s;
    cin >> s >> q;
    vector<ll> ans(2);
    fill(ans.begin(), ans.end(), 0);
    s = '0' + s;
    vector<ll> pref(n + 1);
    fill(pref.begin(), pref.end(), 0);
    for (ll i = 1; i < n + 1; i++) {
        ans[s[i] - 48] ^= a[i];
        pref[i] = pref[i - 1] ^ a[i];
    }
    ll massxor = 0;
    ll op, l, r;
    for (ll i = 0; i < q; i++) {
        cin >> op;
        if (op == 1) {
            cin >> l >> r;
            massxor ^= pref[r] ^ pref[l - 1];
        } else {
            cin >> l;
            cout << (massxor ^ ans[l]) << " ";
        }
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}