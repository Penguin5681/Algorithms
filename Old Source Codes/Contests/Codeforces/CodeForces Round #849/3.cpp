#include<bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main() {
    cin >> t;
    while(t--) {
        cin >> n >> s;
        int l = 0, r = n - 1;
        while(l < n && s[l] == '0') l++;
        while(r >= 0 && s[r] == '1') r--;
        cout << min(n, l + n - r - 1) << endl;
    }
    return 0;
}
