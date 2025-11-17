#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll a, b; cin >> a >> b;
  ll xk, yk; cin >> xk >> yk;
  ll xq, yq; cin >> xq >> yq;

  vector<pair<ll, ll>> moves = {
    {a, b}, {-a, b}, {a, -b}, {-a, -b},
    {b, a}, {-b, a}, {b, -a}, {-b, -a}
  };

  set<pair<ll, ll>> king_pos, queen_pos;

  for(auto [dx, dy]: moves) {
    king_pos.insert({xk+dx, yk+dy});
    queen_pos.insert({xq+dx, yq+dy});
  }

  int ans=0;
  for(auto &pos: king_pos) {
    if(queen_pos.count(pos)) ans++;
  }

  cout << ans << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
  while (t--) solve();
  return 0;
}
