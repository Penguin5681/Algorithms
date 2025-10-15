#include <bits/stdc++.h>

using namespace std;

class Graph {
    private: 
        int V; // number of vertices
        vector<vector<int>> adjacency_matrix;
    
    public:
        Graph(int vertices) : V(vertices) {
            adjacency_matrix.resize(V, vector<int>(V, 0));
        }

        void addEdge(int source, int destination) {
            adjacency_matrix[source][destination] = 1;
            adjacency_matrix[destination][source] = 1;
        }

        void display() {
            for (int i = 0; i < V; i++) {
                for (int j = 0; j < V; j++) 
                    cout << adjacency_matrix[i][j] << " ";
                cout << '\n';
            }
        }

        void BFS(int source);
};

void Graph::BFS(int source) {
    vector<bool> visited;
    for (int i = 0; i < V; ++i)
        visited[i] = true;

    queue<int> q;
    q.push(source);
        while (!q.empty()) {
            int current_node = q.front();
            cout << current_node << " ";
            q.pop();

            for (int neighbour = 0; neighbour < V; ++neighbour) {
                if (adjacency_matrix[current_node][neighbour] == 1 and !visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
} 

signed main() {
    Graph graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 3);

    graph.addEdge(1, 3);

    graph.addEdge(2, 3);
    graph.addEdge(2, 4);

    // graph.display();

    graph.BFS(0);
}