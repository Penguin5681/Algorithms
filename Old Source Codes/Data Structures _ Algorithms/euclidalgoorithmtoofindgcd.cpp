#include <bits/stdc++.h>

int GCD(int A, int B) {
    while (B != 0) {
        int R = A % B;
        A = B;
        B = R;
    }
    return A;
}

signed main(void) {
    
    int A, B;
    std::cin >> A >> B;
    
    std::cout << GCD(A, B);
}