#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  if (y2 < y1) {
    cout << -1 << endl;
    return;
  }
  
  long long diag = y2 - y1;      
  long long newX = x1 + diag; 

  if (newX < x2) {
    cout << -1 << endl;
    return;
  }

  long long moves = diag + (newX - x2);
  cout << moves << endl;
  return;
}

int main() {
  int t; cin >> t;
  while(t--) solve();

  cout << endl;
  return 0;
}