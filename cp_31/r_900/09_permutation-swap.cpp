#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  int diff = 0;
  for(int i=0; i<n; i++) {
    int num; cin >> num;
    diff = gcd(diff, abs(num - (i+1)));
  }

  cout << diff << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
