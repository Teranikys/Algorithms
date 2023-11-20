#include <bits/stdc++.h>

using namespace std;

void solve() {
    int a, b;
    double c;
    cin >> a >> b >> c;
    cout << ceil(ceil(abs(a - b) / 2.) / c) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }

    return 0;
}
