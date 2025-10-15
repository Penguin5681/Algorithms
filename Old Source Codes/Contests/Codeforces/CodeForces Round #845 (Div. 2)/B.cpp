#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cnt_even = 0, cnt_odd = 0;
        cin >> n;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (a % 2 == 0) cnt_even++;
            else cnt_odd++;
        }

        if (cnt_even > cnt_odd) cout << cnt_even - 1 << endl;
        else if (cnt_odd > cnt_even) cout << cnt_odd - 1 << endl;
        else cout << 0 << endl;
    }

    return 0;
}
