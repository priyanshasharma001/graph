#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vertex, edge;
    cout << "Insert number of vertices: ";
    cin >> vertex;
    cout << "Insert number of edges: ";
    cin >> edge;

  vector<int>adjlist[vertex];
    int u, v;

    for (int i = 0; i < edge; i++) {
        cout << "Enter edge (u v): ";
        cin >> u >> v;
        
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);


    }

    cout << "The required adjacency matrix is:\n";
    for (int i = 0; i < vertex; i++) {
        cout<<i<<"->";
        for (int j = 0; j < adjlist[i].size(); j++) {
            cout<<adjlist[i][j]<< " ";
        }
        cout<<endl;
        }
    }

    

