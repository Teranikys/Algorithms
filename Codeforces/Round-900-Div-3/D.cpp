#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> l(k);
    for (int i = 0; i < k; i++) {
        cin >> l[i]; l[i]--;
    }
    vector<int> r(k);
    for (int i = 0; i < k; i++) {
        cin >> r[i]; r[i]--;
    }
    int q; cin >> q;
    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        cnt[x - 1]++;
    }
    string ans;
    for (int i = 0; i < k; i++) {
        string s1 = s.substr(l[i], r[i] - l[i] + 1);
        int sum = 0;
        int ll = l[i];
        int rr = r[i];
        for (int j = ll; j <= (ll + rr) / 2; j++) {
            sum+=cnt[j] + cnt[rr - j + ll];
            if (sum % 2 != 0) {
                swap(s1[j - ll], s1[rr - j]);
            }
        }
        ans.append(s1);
    }
    cout << ans << '\n';
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    while (t--) {
        solve();

    }
    return 0;
}