#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++){
        if (ans[ans.size() - 1] > a[i]) {
            ans.push_back(a[i]);
        }
        ans.push_back(a[i]);
    }
    cout << ans.size() << endl;
    for (int elem : ans) {
        cout << elem << " ";
    }
    cout << endl;
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
