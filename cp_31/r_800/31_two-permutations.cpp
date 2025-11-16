#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n >> a >> b;

  if((n-a-b) > 1 || (n==a && n==b)) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
} 