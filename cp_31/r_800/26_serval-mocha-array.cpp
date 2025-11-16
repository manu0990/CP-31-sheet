#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n, 0);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  bool found = false;
  for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
      if(gcd(a[i], a[j]) <= 2) {
        found = true;
        break;
      }
    }

    if(found) break;
  }
  
  found ? puts("Yes") : puts("No");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}