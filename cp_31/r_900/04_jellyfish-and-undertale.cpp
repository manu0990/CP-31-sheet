#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll a, b, n;
  cin >> a >> b >> n;

  ll timer = 1;
  for(int i=0; i<n; i++) {
    ll num; cin >> num;
    timer += b-1;
    b = min(num+1, a);
  }
  timer += b-1;
  
  cout << timer << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
