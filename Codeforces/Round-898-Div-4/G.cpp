#include <bits/stdc++.h>

#define int long long

using namespace std;


int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
//    t = 1;
    while (t--) {
        string s; cin >> s;
        int ans = 0, cntB = 0, cntA = 0, minA = INT_MAX, cnt = 0;
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (i > 0 && s[i] == 'B' && s[i - 1] == 'A') {
                cntB++;
                flag = false;
                minA = min(minA, cnt);
                ans += cnt;
                cnt = 0;
            } else if (i < s.size() - 1 && s[i] == 'B' && s[i + 1] == 'A') {
                cntB++;
                flag = false;
            } else if (s[i] == 'A' && !flag) {
                cntA++;
                flag = true;
                cnt++;
            } else if (s[i] == 'A'){
                cnt++;
            }
        }
        ans += cnt;
        minA = min(minA, cnt);
        if (cntB >= cntA) {
            cout << ans << '\n';
        } else if (cntB == 0){
            cout << 0 << '\n';
        } else {
            cout << ans - minA << '\n';
        }
    }
    return 0;
}