#include <bits/stdc++.h>

using namespace std;

void displayVec(vector<int> &V) {
    cout << "Size: " << V.size() << '\n';
    for (int it = 0; it < V.size(); ++it) {
        cout << it << " " << '\n';    
    }
}

void pairs() {
    pair<string, int> P;
    P = make_pair("one", 1);
    // P = {"two", 2};

    pair<string, int> &P1 = P;
    // & is used for reference (org pair will be modified)

    pair<int, int> pArray[3];

    pArray[0] = {1, 2};
    pArray[1] = {2, 3};
    pArray[2] = {3, 4};

    P1.first = "two";
    P1.second = 2;
    // cout << P.first << " : " << P.second;

    for (int i = 0; i < 3; ++i) {
        cout << pArray[i].first << " " << pArray[i].second << '\n';
    }
}

void vectors() {
    int n;
    cin >> n;
    vector<pair<int, int>> V;
    V.reserve(n);
    
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        V.push_back({x, y});
    }
    // displayVec(V);
} 

void manyVec() {
    int n;
    int m;
    cin >> n >> m;

    vector<vector<int>> V;
    V.resize(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x;
            cin >> x;
            V[i].push_back(x);
        }
    }

    for (const auto it : V) {
        for (const auto element : it)
            cout << element << " ";
        cout << endl;
    }
}