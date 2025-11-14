#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;

        int ops = 0;
        bool found = false;
        for (int i = 0; i < 7; ++i) { 
            if (x.find(s) != string::npos) {
                found = true;
                break;
            }
            x += x;
            ops++;
        }
        if (!found && x.find(s) != string::npos) {
            found = true;
        }

        if (found) {
            cout << ops << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
