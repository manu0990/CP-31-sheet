#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int n, k;
    cin >> n >> k;
    int nums[n];
    bool flag = false;

    for(int i=0; i<n; i++) {
      cin >> nums[i];
      if(nums[i] == k) {
        flag = true;
      }
    }

    flag == true ? puts("YES") : puts("NO");
  }

  cout << endl;
  return 0;
}