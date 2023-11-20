#include <bits/stdc++.h>

#define int long long

using namespace std;

void solve() {
    vector<string> b(3);
    for (int i = 0; i < 3; i++) {
        cin >> b[i];
    }
    if ((b[0][2] == b[1][2] and b[1][2] == b[2][2] and b[1][2] != '.') or
        (b[2][0] == b[2][1] and b[2][1] == b[2][2]) and b[2][1] != '.') {
        cout << b[2][2] << '\n';
    } else if ((b[0][0] == b[1][0] and b[1][0]  == b[2][0] and b[1][0] != '.') or
               (b[0][0] == b[0][1] and b[0][1] == b[0][2] and b[0][1] != '.') or
               (b[0][0] == b[1][1] and b[1][1] == b[2][2] and b[1][1] != '.')) {
        cout << b[0][0] << '\n';
    } else if ((b[0][1] == b[1][1] and b[1][1] == b[2][1] and b[1][1] != '.') or
               (b[1][0] == b[1][1] and b[1][1] == b[1][2] and b[1][1] != '.') or
               (b[0][2] == b[1][1] and b[1][1] == b[2][0] and b[1][1] != '.')){
        cout << b[1][1] << '\n';
    } else {
        cout << "DRAW" << '\n';
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t --> 0) {
        solve();
    }
    return 0;
}