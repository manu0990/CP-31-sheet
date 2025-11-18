#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  vector<long long> presum(n);
  for(int i=0; i<n; i++) {
    cin >> a[i];
    presum[i] = (i==0) ? a[i] : presum[i-1] + a[i];
  }
  for(int i=0; i<q; i++) {
    int l, r, k;
    cin >> l >> r >> k;
    
    long long sumOutside = presum[n - 1] - (presum[r - 1] - (l > 1 ? presum[l - 2] : 0));
    long long sumSegment = 1LL * (r - l + 1) * k;
    long long total = sumOutside + sumSegment;

    if(total%2) cout << "YES\n";
    else cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}