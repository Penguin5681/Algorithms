#include <iostream>
using namespace std;

int main() {
    int t, u;
    cin >> t >> u;

    int mod = 1;
    if (u == 2) cin >> mod;

    while (t--) {
        int n;
        cin >> n;

        int p = (n * 4) % mod;
        int c = ((n + 1) / 2) % mod;

        if (u == 1) {
            cout << (n + 1) / 2 << " " << (n + 1) / 2 << endl;
            for (int i = 0; i < (n + 1) / 2; i++) {
                for (int j = 0; j < (n + 1) / 2; j++) {
                    if ((i + j) % 2 == 0) {
                        cout << "#";
                    } else {
                        cout << ".";
                    }
                }
                cout << endl;
            }
        } else {
            cout << p << " " << c << endl;
        }
    }

    return 0;
}
