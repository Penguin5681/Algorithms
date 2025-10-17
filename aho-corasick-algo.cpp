#include <bits/stdc++.h>

using namespace std;

const int K = 26; // number of alphabets

// Structure for Aho-Corasick Trie (Prefix Tree/Rooted Tree) 
struct Vertex {
    int next[K];
    bool output = false;

    Vertex() {
        fill(begin(next), end(next), - 1);
    }
};

// vector of Vertex
vector<Vertex> trie;

void add_string(const string &str) {
    int v = 0;
    for (auto it : str) {
        int c = it - 'a';
        if (trie[v].next[c] == -1) {
            trie[v].next[c] = trie.size();
            trie.emplace_back();
        }
        v = trie[v].next[c];
    }
    trie[v].output = true;
}

signed main() {
    Vertex vt;
}