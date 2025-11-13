#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int maxDist = 0;

    int n, x;
    cin >> n >> x;
    int stations[n];
    for(int i=0; i<n; i++) {
      cin >> stations[i];
      if(i == 0) maxDist = stations[0];
      else maxDist = max(maxDist, (stations[i] - stations[i-1]));
    }
    cout << max(maxDist, 2 * (x - stations[n-1])) << endl;

  }

  cout << endl;
  return 0;
}