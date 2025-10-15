#include <bits/stdc++.h>

using namespace std;

class Graph {
    private:
        int V; // Number of vertices
        vector<vector<int>> adjacency_list;

    public:
        Graph(int vertices) : V(vertices) {
            adjacency_list.resize(V);
        }

        void addEdge(int source, int destination) {
            adjacency_list[source].push_back(destination);
        }

        void printGraph() {
            for (auto it : adjacency_list) {
                for (auto ij : it)
                    cout << ij << " ";
                cout << endl;
            }
        }
};

signed main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);

    graph.addEdge(2, 3);

    graph.addEdge(3, 4);

    graph.printGraph();
}