#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }   
    int counter = 1;
        while (counter < N) {
            for (int i = 0; i < N - counter; i++) {
                if (A[i] > A[i+1]) {
                    int temp = A[i];
                    A[i] = A[i+1];
                    A[i+1] = temp;
                }
            }
            counter++;
        }
        for (auto x : A) {
            std::cout << x << " ";
        }
}
