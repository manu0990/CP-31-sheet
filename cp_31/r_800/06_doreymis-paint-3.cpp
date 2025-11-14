#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n;
    cin >> n;
    int arr[n];
    map<int, int> freq;

    for(int i=0; i<n; i++) {
      cin >> arr[i];
      freq[arr[i]]++;
    }

    if(freq.size() > 2) puts("NO");
    else {
      if(abs(freq.begin()->second - freq.rbegin()->second) <= 1) {
        puts("YES");
      }
      else puts("NO");
    }
  }

  return 0;
}