#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int ops = 0, run = 0, lastParity = -1;
    for (int i = 0; i < n; i++) {
        int num; cin >> num;
        int parity = num % 2;
        if (parity == lastParity) {
            run++;
        } else {
            ops += max(0, run - 1);
            run = 1;
            lastParity = parity;
        }
    }
    ops += max(0, run - 1);
    cout << ops << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}