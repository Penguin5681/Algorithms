#include <iostream>
#include <string>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n == 0)
        return false;
    return (n & (n - 1)) == 0;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;
        int num = 0;
        for (int i = 0; i < N; i++) {
            if (S[i] == '1') {
                num += (1 << (N - i - 1));
            }
        }
        int count = 0;
        for (int i = 0; i < 31; i++) {
            if (isPowerOfTwo(num) && num > 0) {
                count++;
                num -= (1 << i);
            }
            if (count == 3) {
                cout << "YES" << endl;
                break;
            }
        }
        if (count != 3) {
            cout << "NO" << endl;
        }
    }
    return 0;
}
