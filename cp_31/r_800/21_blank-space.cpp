#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;

  int ans = 0;
  int longest = 0;
  for(int i=0; i<n; i++) {
    int num;
    cin >> num;
    if(num == 0) longest++;
    else {
      ans = max(ans, longest);
      longest = 0;
    }
  }
  ans = max(ans, longest);
  
  cout << ans << endl;
}
 
int main() {
  int t;
  cin >> t;

  while(t--) solve();

  cout << endl;
  return 0;
}