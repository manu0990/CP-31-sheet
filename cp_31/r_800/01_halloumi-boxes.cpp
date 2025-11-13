#include <bits/stdc++.h>
using namespace std;

int main() {
  // input--------->
  int t;
  cin >> t;

  while(t--) {
    int n, k;
    cin >> n >> k;
    int boxes[n];
    for(int i=0; i<n; i++) {
      cin >> boxes[i];
    }
    if(is_sorted(boxes, boxes+n) || k > 1) cout << "YES\n";
    else cout << " NO\n";
  }

  cout << endl;
  return 0;
}