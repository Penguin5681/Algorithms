#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int max = INT8_MIN;
    int min = INT8_MAX;
    
    for (int i = 0; i < N; i++) {
        max = std::max(max, A[i]);
        min = std::min(min, A[i]);
    }
    std::cout << max << " " << min;
}