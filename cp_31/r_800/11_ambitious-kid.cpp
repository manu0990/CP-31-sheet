#include <iostream>
#include <climits>
#include <math.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ops = INT_MAX;

  for(int i=0; i<n; i++) {
    int num;
    cin >> num;
    if(abs(num) < ops) ops = abs(num);
  }
  cout << ops << endl;
  

  cout << endl;
  return 0;
}