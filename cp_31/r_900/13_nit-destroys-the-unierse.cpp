#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  bool hasZero=false, allZero=true;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    if(a[i] == 0) hasZero = true;
    if(a[i] != 0) allZero = false;
  }

  if(allZero) {
    cout << 0 << endl;
    return;
  }
  else if(!hasZero) {
    cout << 1 << endl;
    return;
  }

  
  int l=0, r=n-1;
  while (a[l] == 0) l++;
  while (a[r] == 0) r--;
  
  bool zeroInside = false;
  for (int i=l; i<=r; ++i) {
    if (a[i] == 0) { 
      zeroInside = true;
      break; 
    }
  }

  cout << (zeroInside ? 2 : 1) << '\n';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
