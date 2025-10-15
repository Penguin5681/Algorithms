#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (A[j] < A [i]) {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
    for (auto i : A) {
        std::cout << i << " ";
    }
}