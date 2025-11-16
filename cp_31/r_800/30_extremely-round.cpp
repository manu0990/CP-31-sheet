#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  string s = to_string(n);
  int digits = s.size();
  int firstDigit = s[0] - '0';

  cout << ( (digits - 1) * 9 + firstDigit ) << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
