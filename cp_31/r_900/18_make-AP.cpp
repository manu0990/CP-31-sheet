#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  bool isAP = false;
  
  int new_a = 2*b-c;
  int new_b = (a + c) / 2;
  int new_c = 2*b-a;

  if(new_a/a > 0 && new_a%a == 0) isAP = true;
  else if(new_b/b > 0 && new_b%b == 0 && (c - a)%2 == 0) isAP = true;
  else if(new_c/c > 0 && new_c%c == 0) isAP = true;

  isAP ? cout << "YES\n" : cout << "NO\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
