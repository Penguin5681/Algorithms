#include <iostream>

int main() {
    int N, M;
    std::cin >> N >> M;

    int Array[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> Array[i][j];
        }
    }
    std::cout << "Enter a element to search for: ";
    int e;
    std::cin >> e;
    
    bool flag = false;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (Array[i][j] == e) {
                flag = true;
            }
        }
    }
    if (flag) {
        std::cout << "Element Found\n";
    }
    else {
        std::cout << "Not Found\n";
    }
    return 0;
}