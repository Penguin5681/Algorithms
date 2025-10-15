#include <iostream>

int main() {
    int N;
    bool flag = false;
    std::cout << "Enter the size of an array: ";
    std::cin >> N;
    char Array[N + 1];
    std::cout << "Enter your array: ";
    std::cin >> Array;

        for(int i = 0; i < N; i++) {
            if (Array[i] != Array[N - 1 - i]) {
            flag = false;
            break;
        }
            else {
                flag = true;
        }
    }
    if (flag == true) {
        std::cout << "YES\n";
    }
    else {
        std::cout << "NO\n";
    }
    return 0;
}