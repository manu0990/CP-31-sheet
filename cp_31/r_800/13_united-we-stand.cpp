#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n, 0);
  for(auto &i: a) cin >> i;
  sort(a.begin(), a.end());

  if(a[0] == a.back()) {
    cout << "-1\n";
    return;
  }
  else {
    int i=0;
    while(a[i] == a[0]) i++;
    cout << i << " " << n-i << endl;
    for(int j=0; j<i; j++) cout << a[j] << " ";
    cout << endl;
    for(int j=i; j<n; j++) cout << a[j] << " ";
  }
}

int main() {
  int t; cin >> t;
  while(t--) solve();

  return 0;
}