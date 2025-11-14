#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int nums[n-1];
    int sum = 0;
    for(int i=0; i<n-1; i++) {
      cin >> nums[i];
      sum += nums[i];
    }

    cout << -sum << endl;
  }

  cout << endl;
  return 0;
}