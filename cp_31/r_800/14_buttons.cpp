#include <iostream>
using namespace std;

void solve() {
  int a, b, c;
  cin >> a >> b>> c;
  
  if(c%2 == 1 || c == 1) a++;

  if(a > b) puts("First");
  else puts("Second");
}

int main() {
  int t; cin >> t;

  while(t--) solve();

  cout << endl;
  return 0;
}