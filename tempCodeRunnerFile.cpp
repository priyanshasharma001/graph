#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertex, edge;
    cout << "Insert number of vertices: ";
    cin >> vertex;
    cout << "Insert number of edges: ";
    cin >> edge;

    vector<pair<int, int>> adjlist[vertex];
    int u, v, weight;

    for (int i = 0; i < edge; i++) {
        cout << "Enter edge (u v weight): ";
        cin >> u >> v >> weight;

        if (u >= vertex || v >= vertex || u < 0 || v < 0) {
            cout << "Invalid edge. Try again.\n";
            i--;  // Repeat this iteration
            continue;
        }
        
        adjlist[u].push_back(make_pair(v, weight));
        adjlist[v].push_back(make_pair(u, weight));
    }

    cout << "\nThe adjacency list is:\n";
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (auto &neighbor : adjlist[i]) {
            cout << "(" << neighbor.first << ", " << neighbor.second << ") ";
        }
        cout << endl;
    }
    return 0;
}
