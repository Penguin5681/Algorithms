#include <bits/stdc++.h>

using namespace std;

vector<int> find_permutation(int N) {
    vector<int> permutation;
    if (N % 2 == 0) {
        
        
        for (int i = 1; i <= N / 2; i++) {
            permutation.push_back(i);
        }
        for (int i = N; i > N / 2; i--) {
            permutation.push_back(i);
        }
    } else {
        
        
        for (int i = 1; i <= N / 2; i++) {
            permutation.push_back(i);
        }
        permutation.push_back(N);
        for (int i = N - 1; i > N / 2; i--) {
            permutation.push_back(i);
        }
    }
    return permutation;
}

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N;
        cin >> N;
        vector<int> permutation = find_permutation(N);
        for (int i = 0; i < N; i++) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
