#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

void solve() {
    int n, k; cin >> n >> k;
    string s;
    cin >> s;
    vector<char> A(n, '+');
    int left = 0, right = n - 1, a = 0, b = 0, c = 0;
    for (char ch : s) {
        if (ch == '0') ++a;
        else if (ch == '1') ++b;
        else ++c;
    }
    for (int i = 0; i < a; ++i) A[left++] = '-';
    for (int i = 0; i < b; ++i) A[right--] = '-';
    for (int i = 0; i < c; ++i) {
        A[left++] = '?'; 
        A[right--] = '?';
    }
    if (a + b + c == n) {
        for (char ch : A) cout << '-';
        cout << "\n";
        return;
    }
    for (char ch : A) cout << ch;
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
//    t = 1;
    while (t --> 0) {
        solve();
    }
    return 0;
}