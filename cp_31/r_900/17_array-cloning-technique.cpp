#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  bool isSame = true;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    if(i > 0 && a[i] != a[i-1]) isSame = false;
  }
  if(isSame || n == 1) {
    cout << 0 << endl;
    return;
  }

  unordered_map<int, int> freq;
  int maxFreq = 0;
  for(int it: a) freq[it]++;
  for(auto [val, f]: freq) maxFreq = max(maxFreq, f);
  
  // this is simulation based approach
  // int ops = 0;
  // while (maxFreq < n) {
  //   int canAdd = min(maxFreq, n - maxFreq);
  //   ops += 1;
  //   ops += canAdd;
  //   maxFreq += canAdd;
  // }

  // this is formula based
  int clones = (int)ceil(log2((double)n / maxFreq));
  int ops = (n - maxFreq) + clones;

  cout << ops << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
