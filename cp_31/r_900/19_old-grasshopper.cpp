#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, n;
    cin >> x >> n;

    long long add;
    if (n % 4 == 0) add = 0;
    else if (n % 4 == 1) add = n;
    else if (n % 4 == 2) add = -1;
    else add = -(n + 1);

    if (x % 2 == 0) cout << x - add << "\n";
    else cout << x + add << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
}
