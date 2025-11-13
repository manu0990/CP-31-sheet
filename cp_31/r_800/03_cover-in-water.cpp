#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; 
  cin >> t;

  while(t--) {

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int cnt = 0;
    int tempCnt = 0;
    for(char& c: s) {
      if(c == '.') tempCnt++;
      else if(c == '#') {
        cnt += tempCnt > 2 ? 2 : tempCnt;
        tempCnt = 0;
      }

      if(tempCnt > 2) {
        tempCnt = 0;
        cnt = 2;
        break;
      }
    }
    if(tempCnt) cnt += tempCnt > 2 ? 2 : tempCnt;;

    cout << cnt << endl;
  }

  cout << endl;
  return 0;
}