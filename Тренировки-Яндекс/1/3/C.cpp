#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, x;
    cin >> n >> m;
    unordered_set<int> a;
    unordered_set<int> b;
    vector<int> ans1;
    vector<int> ans2;
    vector<int> ans3;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.emplace(x);
    }
    for (int i = 0; i < m; i++){
        cin >> x;
        if (a.contains(x)) {
            ans1.emplace_back(x);
        } else {
            ans3.emplace_back(x);
        }
        b.emplace(x);
    }
    for (int elem : a){
        if (!b.contains(elem)) {
            ans2.emplace_back(elem);
        }
    }
    sort(ans1.begin(), ans1.end());
    sort(ans2.begin(), ans2.end());
    sort(ans3.begin(), ans3.end());
    cout << ans1.size() << endl;
    for (int i : ans1){
        cout << i << " ";
    }
    cout << endl << ans2.size() << endl;
    for (int i : ans2){
        cout << i << " ";
    }
    cout << endl << ans3.size() << endl;
    for (int i : ans3){
        cout << i << " ";
    }

    return 0;
}
