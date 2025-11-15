#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
  int n;
  cin >>n;
  int arr[n];
  int diff = 1e9;
  bool isSorted = true;

  for(int i=0; i<n; i++) {
    cin >> arr[i];
    
    if(i > 0) {
      diff = min((arr[i] - arr[i-1]), diff);
      isSorted = isSorted && arr[i-1] <= arr[i];      
    }
  }

  if(!isSorted) {
    cout << 0 << endl;
    return;
  }
  
  cout << diff/2 + 1 << endl;
}

int main() {
  int t;
  cin >> t;

  while(t--) solve();

  cout << endl;
  return 0;
}