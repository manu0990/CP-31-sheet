#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s; cin >> s;
  int n = s.size();
  int ab = 0, ba = 0;

  for (int i = 0; i + 1 < n; i++) {
      if (s[i] == 'a' && s[i+1] == 'b') ab++;
      else if (s[i] == 'b' && s[i+1] == 'a') ba++;
  }

  if (ab == ba) {
    cout << s << "\n";
    return;
  } 

  if (ab > ba) s[0] = 'b';
  else s[0] = 'a';

  cout << s << endl;
} 

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
