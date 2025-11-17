#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll wholeSum(ll n) {
  return (n * (n+1)) /2;
}

void solve() {
  ll n, k, x;
  cin >> n >> k >> x;
  
  ll minSum = wholeSum(k);
  ll maxSum = wholeSum(n) - wholeSum(n-k);

  cout << (minSum <= x && x <= maxSum ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
