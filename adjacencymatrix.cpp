#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertex, edge;
    cout << "Insert number of vertices: ";
    cin >> vertex;
    cout << "Insert number of edges: ";
    cin >> edge;

    vector<vector<bool>> adjmatrix(vertex, vector<bool>(vertex, 0));
    int u, v;

    for (int i = 0; i < edge; i++) {
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        
        adjmatrix[u][v] = 1;
        adjmatrix[v][u] = 1;


        // if (u >= 0 && u < vertex && v >= 0 && v < vertex) {
        //     adjmatrix[u][v] = 1;
        //     adjmatrix[v][u] = 1;  // If undirected
        // } else {
        //     cout << "Invalid edge! Try again.\n";
        //     i--;  // Reattempt this edge input
        // }
    }

    cout << "The required adjacency matrix is:\n";
    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjmatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
