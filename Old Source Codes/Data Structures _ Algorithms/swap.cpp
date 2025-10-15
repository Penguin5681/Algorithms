#include <bits/stdc++.h>

void Swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

int main() {
    
    int a = 12; int b = 16;
    Swap(&a, &b);
    std::cout << a << " " << b;
}