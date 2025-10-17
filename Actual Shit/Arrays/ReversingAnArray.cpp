#include <bits/stdc++.h>

void reverseArray(std::vector<int> &arr) {
    for (auto it = 0; it < arr.size() / 2; it++) {
        std::swap(arr[it], arr[arr.size() - it - 1]);
    }
}

signed main() {
    // Reversing an array normally
    std::vector<int> arr = {1, 2, 3, 4, 5};
    reverseArray(arr);

    // Reversing an vector using STL
    std::reverse(arr.begin(), arr.end());

    for (auto it : arr) 
        std::cout << it << " ";
}