// Google kick start question

#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;
    int A[N+1];
    A[N] = -1;

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    if (N == 1) {
        std::cout << "1\n";
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < N; i++) {
        if (A[i] > mx and A[i] > A[i+1]) {
            ans++;
        }
        mx = std::max(mx, A[i]);
    }
    std::cout << ans;
    return 0;
}