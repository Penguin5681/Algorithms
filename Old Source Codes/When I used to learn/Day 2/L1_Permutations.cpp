#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> ans;

// Contains unique numbers
void permutations(vector<int> &V, int idx) {    
    if (idx == V.size()) {
        ans.push_back(V);
        return;
    }   
    for (int i = idx; i < V.size(); i++) {
        swap(V[i], V[idx]);
        permutations(V, idx + 1);
        swap(V[i], V[idx]);
    }
    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
            cout << endl;
    }
}

void STLpermutations(vector<int> &V) {
    sort(V.begin(), V.end());
    
    do {
        ans.push_back(V);
    }
        while (next_permutation(V.begin(), V.end()));

    for (auto i : ans) {
        for (auto j : i)
            cout << j << " ";
        cout << '\n';
    }
}


// Contains duplicates as well as uniques
void permutationsDUPLICATE(vector<int> &V, int idx) {
    // sort(V.begin(), V.end());
    if (idx == V.size()) {
        ans.push_back(V);
        return;
    }

    for (int i = idx; i < V.size(); ++i) {
        if (i != idx and V[i] == V[idx])
            continue;
        swap(V[i], V[idx]);
        permutationsDUPLICATE(V, idx + 1);
    }

    for (const auto i : ans) {
        for (const auto it : i)
            cout << it << " ";
        cout << '\n';
    }
    return;
}