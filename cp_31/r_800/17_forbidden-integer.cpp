#include <iostream>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        puts("YES");
        cout << n << endl;
        for (int i = 0; i < n; i++) cout << "1 ";
        cout << endl;
    } 
    else if (k == 1 || (k == 2 && n % 2 == 1)) {
        puts("NO");
    } 
    else {
        puts("YES");
        cout << n / 2 << endl;
        if (n % 2 == 0) {
            for (int i = 0; i < n / 2; i++) cout << "2 ";
        } else {
            cout << "3 ";
            for (int i = 1; i < n / 2; i++) cout << "2 ";
        }
        cout << endl;
    }
}

int main() {
    int t; 
    cin >> t;
    while (t--) solve();
    return 0;
}
