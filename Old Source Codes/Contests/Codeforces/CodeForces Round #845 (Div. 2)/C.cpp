#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_numbness = 0;
        for (int i = 0; i < n; i++) {
            int xor_sum = 0;
            for (int j = i; j < n; j++) {
                xor_sum ^= a[j];
                max_numbness = max(max_numbness, max(a[j], xor_sum));
            }
        }
        cout << max_numbness << endl;
    }
    return 0;
}
