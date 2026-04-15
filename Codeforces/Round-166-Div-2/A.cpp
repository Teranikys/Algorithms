#include <bits/stdc++.h>

#define int long long

using namespace std;

using ll = long long;
using ld = long double;
using vi = vector<ll>;
using vii = vector<pair<ll, ll>>;
using vd = vector<ld>;

bool isDifferent(int n) {
  if (n < 1000) {
    return false;
  }

  vector<int> nums = vector<int>(4);
  nums[0] = (n / 1000);
  nums[1] = (n / 100 % 10);
  nums[2] = (n / 10 % 10);
  nums[3] =  (n % 10);

  for (int i = 0; i < 4; i++) {
    for (int j = i + 1; j < 4; j++) {
      if (nums[i] == nums[j]) {
        return false;
      }
    }
  }

  return true;
}

void solve() {
  int y;
  cin >> y;
  for (int i = y + 1; i <= 10000; i++){
    if (isDifferent(i)) {
      cout << i;
      return;
    }
  }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    // cin >> t;
    t = 1;
    while (t-- > 0) {
        solve();
    }
    return 0;
}
