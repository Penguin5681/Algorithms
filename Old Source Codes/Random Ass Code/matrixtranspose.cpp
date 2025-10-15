#include <bits/stdc++.h>

signed main(void) {
    
    int N, M;
    std::cout << "Enter the order of a matrix (N x M): ";
    std::cin >> N >> M;

    int Array[N][M];
    std::cout << "Enter a matrix of order: " << N << " x " << M << std::endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> Array[i][j];
        }
    }
    std::cout << "The transpose of a matrix is as follows: \n";

    for (int i = 0; i < N; i++) {           
        for (int j = 0; j < M; j++) {
            std::cout << Array[j][i] << " ";        // Just simply interchange the row and column values ;)
        }
        std::cout << std::endl;
    }
    return 0;
}