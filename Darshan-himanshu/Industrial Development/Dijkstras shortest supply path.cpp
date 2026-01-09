#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

typedef pair<int, int> pii; // (distance, vertex)

void dijkstra(int V, vector<vector<pii>> &graph, int source) {
    vector<int> dist(V, INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        for (auto edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    cout << "\nShortest Supply Paths from Industry " 
         << source << ":\n";
    for (int i = 0; i < V; i++)
        cout << "Industry " << i << " : " << dist[i] << endl;
}

int main() {
    int V = 5;
    vector<vector<pii>> graph(V);

    graph[0].push_back({1, 10});
    graph[0].push_back({2, 5});
    graph[1].push_back({3, 1});
    graph[2].push_back({1, 2});
    graph[2].push_back({4, 9});
    graph[3].push_back({4, 4});

    dijkstra(V, graph, 0);

    cout << "\nIndustrial Growth: 80%\n";
    return 0;
}
