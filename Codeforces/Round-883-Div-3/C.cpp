#include <bits/stdc++.h>

#define int long long

using namespace std;

pair<int, int> proccessOneContestant(int m, int h);

void solve() {
    int n, m, h;
    cin >> n >> m >> h;
    pair<int, int> rudolf;
    vector<pair<int, int>> leaderb(n);
    rudolf = proccessOneContestant(m, h);
    leaderb[n - 1] = rudolf;
    int ans = 1;
    for (int i = 0; i < n - 1; i++) {
        leaderb[i] = proccessOneContestant(m, h);
        if (leaderb[i] < rudolf) ans++;
    }
    cout << ans  << '\n';
}

pair<int, int> proccessOneContestant(int m, int h) {
    vector<int> t(m);
    for (int i = 0; i < m; i++) {
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    int i = 0;
    int cnt = 0, sum = 0, shtraf = 0;
    while (i < m and sum + t[i] <= h) {
        cnt++;
        sum += t[i++];
        shtraf += sum;
    }
    return {-cnt, shtraf};
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t-- > 0) {
        solve();
    }
    return 0;
}