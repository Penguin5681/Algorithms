/* Problem: Given an array arr[] of size N. The task is to find the first repeating element in the array of
integers, i.e., an element that occurs more than once and whose index of first occurrence is
smallest. */

#include <bits/stdc++.h>

int main() {
    int N;
    std::cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int n = 1e6 + 2;
    int idx[n];
        for (int i = 0; i < n; i++) {
            idx[i] = -1;
        }
    int minimum_index = INT8_MAX;
        for (int i = 0; i < n; i++) {
            if (idx[A[i]] != -1) {
                minimum_index = std::min(minimum_index, idx[A[i]]);
            }
            else {
                idx[A[i]] = i;
            }
        }
    if (minimum_index == INT8_MAX) {
        std::cout << "-1" << std::endl;
    }
    else {
        std::cout << minimum_index + 1 << std::endl;
    }
    return 0;
}