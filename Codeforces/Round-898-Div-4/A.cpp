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
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}