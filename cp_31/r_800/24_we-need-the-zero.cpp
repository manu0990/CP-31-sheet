#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        total ^= num;
    }

    if (n % 2 == 0) {
        if (total == 0) cout << 0 << endl;
        else cout << -1 << endl;
    } else {
        cout << total << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) solve();
    return 0;
}
