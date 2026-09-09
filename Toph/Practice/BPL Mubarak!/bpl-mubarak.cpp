#include <bits/stdc++.h>

using namespace std;
void solve() {
    string s; cin >> s;
    int ball = 0;
    for (char c : s) {
        if (c == 'O') ball++;
        else if (c >= '0' && c <= '9') ball++;
    }
    if (ball == 1) cout << "1 BALL";
    else if (ball < 6) cout << ball << " BALLS";
    else if (ball % 6 == 0) {
        int x = ball / 6;
        if (x == 1) cout << "1 OVER";
        else cout << x << " OVERS";
    }
    else {
        int x = ball / 6, y = ball % 6;
        if (x == 1) {
            cout << "1 OVER ";
            if (y == 1) cout << "1 BALL";
            else cout << y << " BALLS";
        }
        else {
            cout << x << " OVERS ";
            if (y == 1) cout << "1 BALL";
            else cout << y << " BALLS";
        }
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) solve();
}
