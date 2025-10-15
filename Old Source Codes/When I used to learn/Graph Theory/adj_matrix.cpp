#include <bits/stdc++.h>

using namespace std;

class Graph {
    public:
        int V;  // number of vertices
        vector<vector<int>> adjacencyMatrix;
    public:
        Graph(int vertices) : V(vertices) {
            adjacencyMatrix.resize(V, vector<int>(V, 0));
        }
    
        void add_edge(int source, int destination) {
            adjacencyMatrix[source][destination] = 1;
            adjacencyMatrix[destination][source] = 1;
        }

        void display() {
            for (int i = 0; i < V; ++i) {
                for (int j = 0; j < V; ++j)
                    cout << adjacencyMatrix[i][j] << " ";
                cout << endl; 
            }
        }
};

signed main() {
    Graph graph(10);
    graph.add_edge(1, 2);
    graph.add_edge(1, 5);

    graph.add_edge(2, 1);
    graph.add_edge(2, 4);

    graph.add_edge(3, 5);

    graph.add_edge(4, 2);
    graph.add_edge(4, 5);

    graph.add_edge(5, 1);
    graph.add_edge(5, 3);
    graph.add_edge(5, 4);

    graph.display();


}