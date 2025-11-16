#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> arr(n, 0);
  int cnt = 0;
  for(int i=0; i<n; i++) {
    cin >> arr[i];
    if(arr[i] == 2) cnt++;
  }

  if(cnt==0) {
    cout << 1 << endl;
    return;
  }
  if(cnt%2) {
    cout << -1 << endl;
    return;
  }
  
  int k = 0;
  for(int i=0; i<n; i++) {
    if(arr[i] == 2) k++;  
    
    if(k == cnt/2) {
      cout << (i+1) << endl;
      return;
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}