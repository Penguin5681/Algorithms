// Linear and Binary Search
#include <bits/stdc++.h>

using namespace std;

bool linearSearch(vector<int> &V, int key) {
    for (int i = 0; i < V.size(); ++i) {
        if (i == key) return true;
    }
    return false;
}

bool binarySearch(vector<int> &V, int key) {
    // Array should be sorted 
    sort(V.begin(), V.end());
    int begin = 0; 
    int end = V.size() - 1;
    int mid;
        while (begin <= end) {
            mid = (begin + end) / 2;
            if (V[mid] == key)
                 return true;
            else if (V[mid] < key)
                begin = mid + 1;     
            else
                end = mid - 1;
        }
    return false;
}

