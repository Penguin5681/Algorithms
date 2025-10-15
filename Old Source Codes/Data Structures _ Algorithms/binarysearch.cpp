#include <bits/stdc++.h>

int binary(int A[], int n, int key) {
    int Start = 0;
    int End = n;
        while (Start <= End) {
            int Mid = (Start + End) / 2;

            if (A[Mid] == key) {
                return Mid;
            }
            else if (A[Mid] > key) {
                End = Mid - 1;
            }
            else {
                Start = Mid + 1;
            }
        }
    return -1;                                          
}

int main() {
    int N;
    std::cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int key;
    std::cout << "ENTER A KEY: ";
    std::cin >> key;

    std::cout << binary(A, N, key);
}