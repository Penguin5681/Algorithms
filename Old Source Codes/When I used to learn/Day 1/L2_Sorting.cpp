#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &V) {
// Swaps the minimum element with the beginning element (Until Sorted)
    
    for (int i = 0; i < V.size() - 1; ++i) {
        for (int j = i + 1; j < V.size(); ++j) {
            if (V[j] < V[i])
                swap(V[j], V[i]);
        }
    }

    for (const auto &it : V)
        cout << it << " ";
}

void bubbleSort(vector<int> &V) {
// Swap two adjacent element if they are in wrong order 

    for (int i = 0; i < V.size() - 1; ++i) {
        for (int j = 0; j < V.size() - i - 1; ++j) {
            if (V[j] > V[j + 1])
                swap(V[j], V[j + 1]);
        }
    }

    for (const auto &it : V)
        cout << it << " ";
}

void insertionSort(vector<int> &V) {
// Inserts an element in the appropriate position 

    for (int i = 1; i < V.size(); ++i) {
        int curr = V[i];
        int j = i - 1;
        
        while (V[j] > curr and j >= 0) {
            V[j + 1] = V[j];
            j--;
        }
            V[j + 1] = curr;
    }
    
    for (const auto &it : V)
        cout << it << " ";
}