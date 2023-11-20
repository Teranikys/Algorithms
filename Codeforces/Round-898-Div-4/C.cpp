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
        string s;
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            cin >> s;
            for (int j = 0; j < 10; j++) {
                if (s[j] == 'X') {
                    ans += min(min(i, j), min(9 - i, 9 - j)) + 1;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}