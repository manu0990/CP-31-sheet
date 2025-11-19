#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n; 
  cin >> n;

  if (n < 4 || n % 2 != 0) {
    cout << -1 << "\n";
    return;
  }

  ll mini = (n + 5) / 6;
  ll maxi = n / 4;

  cout << mini << " " << maxi << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
