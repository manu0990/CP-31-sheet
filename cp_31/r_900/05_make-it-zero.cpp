#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  for(int i=0; i<n; i++) {
    int num; cin >> num;
  }

  if(n%2) {
    cout << 4 << endl;
    cout << 1 << " " << 2 << endl;
    cout << 1 << " " << 2 << endl;
    cout << 2 << " " << n << endl;
    cout << 2 << " " << n << endl;
  }
  else {
    cout << 2 << endl;
    cout << 1 << " " << n << endl;
    cout << 1 << " " << n << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
