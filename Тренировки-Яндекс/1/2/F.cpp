#include <bits/stdc++.h>

using namespace std;

bool isSymetric(vector<int> a, int size){
    for (int i = 0; i < size / 2; i++){
        if (a[i] != a[size - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    vector<int> aux(n * 2 + 1);
    vector<int> ans;
    for (int i = 0; i <= n; i++){
        std::copy(a.begin(), a.end(), aux.begin());
        for (int j = i - 1; j >= 0; j--){
            aux[n + i - j - 1] = a[j];
        }
        if (isSymetric(aux, n + i)) {
            cout << i << endl;
            for (int j = 0; j < i; j++){
                cout << aux[n + j] << " ";
            }
            break;
        }
    }

    return 0;
}