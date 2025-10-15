#include <bits/stdc++.h>

using namespace std;

// Maps are used to store key value pairs (Dictionary)
// normal maps stores data sorted order
// unordered maps stores data in unsorted order 

void displayMap(map<string, int> &M) {
    cout << M.size() << '\n';
    for (auto &pr : M) {
        cout << pr.first << " " << pr.second << '\n';
    }
}

void makeMap() {
    map<string, int> M;
    M["one"] = 1;
    M["two"] = 2;

    M.insert(make_pair("three", 3));
    M.insert({"four", 4});      // TC: O(log(n)) n is the current size

    // map<string, int> :: iterator it;

    // for (it = M.begin(); it != M.end(); ++it) {
    //     cout << (*it).first << " " << (*it).second << '\n';
    //     cout << it->first << " " << it->second << '\n';
    // }  

    auto it = M.find("five");   // returns an iterator if value not found, it goes to the next of end pair
    // O(log n) M.find
    if (it == M.end()) cout << "No Value";
    else cout << it->first << " " << it->second << '\n';
}

void problem() {
    int n;
    cin >> n;
    map<string, int> M;

    for (int i = 0; i < n; ++i) {
        string st;
        cin >> st;
        M[st]++;
    }

    for (auto pr : M)
        cout << pr.first << " " << pr.second << '\n';
}

void problem1() {
    int n;
    cin >> n;
    unordered_map<string, int> M;
    for (int i = 0; i < n; ++i) {
        string st;
        cin >> st;
        M[st]++;
    }

    int q;
    cin >> q;
        while (q--) {
            string st;
            cin >> st;
            cout << M[st] << '\n';
        }

    // for (auto pr : M) cout << pr.first << " " << pr.second << '\n';
}

void problem2() {
    int n;
    cin >> n;
    unordered_map<string, int> M;
    for (int i = 0; i < n; ++i) {
        string st;
        cin >> st;
        M[st]++;
    }
    int count = 0;
    for (auto pr : M) {
        if (pr.second == 2)
            count++;
    }
    cout << count << '\n';
}

void problem3() {
    int n;
    cin >> n;
    string st;
    cin >> st;

    unordered_set<char> ans;
    int count = 0;
    for (int i = 0; i < 2 * n - 2; i += 2) {
        char key = tolower(st[i]);
        char door = st[i + 1];

        if (ans.find(door) == ans.end()) {
            count++;
            ans.insert(key);
        }
    }
    cout << count << '\n';
}

void problem4() {
    int n;
    cin >> n;
    map<string, int> name;
    for (int i = 0; i < n; ++i) {
        string st;
        cin >> st;
        name[st]++;
    }
    string i = "1";
    for (auto pr : name) {
        if (pr.second > 1) {
            string newName = pr.first;
            newName.append(i);
            cout << newName << '\n';
        }
        else if (pr.second == 1) cout << "OK\n";
    }
}

void displaySet(set<string> &S) {
    cout << S.size() << '\n';
    for (auto it = S.begin(); it != S.end(); ++it) {
        cout << *it << '\n';
    }
}

void makeSet() {
    set<int> St;
    St.insert(1);
    St.insert(2);
    St.insert(3);
    auto it = St.find(5);
    if (it != St.end()) cout << *it;
    else cout << "No Value Found!";
}

void q1() {
    int n;
    cin >> n;
    set<string> S;
    for (int i = 0; i < n; ++i) {
        string st;
        cin >> st;
        S.insert(st);
    }

    displaySet(S);
}

void q2() {
    int n,q;
    cin >> n;
    unordered_set<string> St;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        St.insert(s);
    }
    cin >> q;
        while (q--) {
            string qst;
            cin >> qst;
            auto it = St.find(qst);
            if (it != St.end())
                cout << *it << '\n';
            else cout << "No\n";
        }
}

/*
8
abc
def
xyz
hgj
abc
asc
xyz
fgh
3
abc
xyz
gef
*/