#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int V, vector<vector<int>> &graph, int start) {
    vector<bool> visited(V, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "Nearby attractions from spot " << start << ": ";

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int v : graph[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    int V = 5;
    vector<vector<int>> graph(V);

    graph[0] = {1, 2};
    graph[1] = {3};
    graph[2] = {3, 4};
    graph[3] = {};
    graph[4] = {};

    bfs(V, graph, 0);
    return 0;
}
