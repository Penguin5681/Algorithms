#include <bits/stdc++.h>

using namespace std;

class Graph {
    private:
        int V;
        vector<vector<int>> adjacency_matrix;

    public:
        Graph(int Vertices) : V(Vertices) {
            adjacency_matrix.resize(V, vector<int>(V, 0));
        }

        void add_edge(int source, int destination) {
            adjacency_matrix[source][destination] = 1;  // Link
            adjacency_matrix[destination][source] = 1; // Link
        }

        void display() {
            for (auto it : adjacency_matrix) {
                for (auto ij : it)
                    cout << ij << " ";
                cout << '\n';
            }
        }
};

signed main() {
    Graph graph(5);
}