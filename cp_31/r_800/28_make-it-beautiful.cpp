#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  if (a.front() == a.back()) {
    cout << "NO\n";
    return;
  }

  sort(a.rbegin(), a.rend());

  if (a[0] == a[1]) {
    swap(a[1], a[n-1]);
  }

  cout << "YES\n";
  for (int x : a) cout << x << " ";
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
