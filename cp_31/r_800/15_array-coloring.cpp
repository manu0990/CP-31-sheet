#include<iostream>
using namespace std;

void solve() {
  int n; cin >> n;
  int sum = 0;

  for(int i=0; i<n; i++) {
    int num;
    cin >> num;
    sum += num;
  }

  if(sum % 2 == 0) puts("YES");
  else puts("NO");
}

int main() {
  int t; cin >>t;

  while(t--) solve();

  cout << endl;
  return 0;
}