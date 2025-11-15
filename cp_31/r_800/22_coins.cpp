#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;
  if(n%2 == 0 || (n-k)%2 == 0) puts("YES");
  else puts("NO");
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  cout << endl;
  return 0;
}