//Linear Search
#include <bits/stdc++.h>

/* int main(void) {
    
    int n;
    std::cin >> n;

    int A[n];
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }
    int element;
    std::cout << "Enter a element to search for: " << '\n';
    std::cin >> element;

    for (int i = 0; i < n; i++) {
        if (A[i] == element) {          // This is known as linear search;
            std::cout << i;
        }
    }
    return -1;
} */
int search(int A[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (A[i] == key) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int N;
    std::cin >> N;
    int Array[N];

    for (int i = 0; i < N; i++) {
        std::cin >> Array[i];
    }

    int key;
    std::cout << "ENTER A KEY: ";
    std::cin >> key;

    std::cout << search(Array, N, key);
}
// Time Complexity is O(n)