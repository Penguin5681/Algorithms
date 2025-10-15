#include<bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> s;
        int x = 0, y = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == 'L') x--;
            if(s[i] == 'R') x++;
            if(s[i] == 'U') y++;
            if(s[i] == 'D') y--;
            if(x == 1 && y == 1) {
                cout << "YES" << endl;
                break;
            }
        }
        if(x != 1 || y != 1) cout << "NO" << endl;
    }
    return 0;
}
