#include<iostream>
using namespace std;

void solve() {
  int n;
  cin >>n;
  int posOnes=0, negOnes=0;

  for(int i=0; i<n; i++) {
    int num;
    cin >> num;

    if(num == 1) posOnes++;
    else negOnes++;
  }

  int ops = 0;
  if(negOnes > posOnes) {
    int diff = negOnes - posOnes;
    ops = (diff +1) / 2;
    negOnes -= ops;
    posOnes += ops;
  }

  if(negOnes%2 == 1) ops += 1;

  cout << ops << endl;
}

int main() {
  int t;
  cin >> t;

  while(t--) solve();

  cout << endl;
  return 0;
}