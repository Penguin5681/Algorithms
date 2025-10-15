#include <bits/stdc++.h>
#include <vector>
using std::vector;

bool is_equal(std::pair<char, char> pair1, std::pair<char, char> pair2) {
    if (pair1.first == pair2.first) {
        return true;
    }
    return false;
}

bool myCompare(std::pair<int, int> p1, std::pair<int, int> p2) {
    return p1.first < p2.first;
}

signed main(void) {
    /* std::pair <int, char > p;
    // to access
    p.first = 3;
    p.second = 'c';
 */
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<std::pair<int, int>> v;

    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        v.push_back(std::make_pair(arr[i], i));
    }

    std::sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++) {
        arr[v[i].second] = i;
    }

    for (int i = 0; i < v.size(); i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}