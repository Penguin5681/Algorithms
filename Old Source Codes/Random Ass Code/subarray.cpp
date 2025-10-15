#include <iostream>

int main() {
    int N; std::cin >> N;
    int A[N]; int sum;
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        sum = 0;
        for (int j = i; j < N; j++) {
            sum += A[j];
            std::cout << sum << " ";                    //No. of sub_arrays N(N+1)/2;
        }
    }
    return 0;
}