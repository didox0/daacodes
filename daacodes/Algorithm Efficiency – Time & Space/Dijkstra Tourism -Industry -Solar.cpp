#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

void dijkstra(int V, vector<vector<pii>> &g, int src) {
    vector<int> dist(V, INT_MAX);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[src] = 0;
    pq.push({0, src});

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        for (auto e : g[u]) {
            int v = e.first, w = e.second;
            if (dist[v] > d + w) {
                dist[v] = d + w;
                pq.push({dist[v], v});
            }
        }
    }

    for (int i = 0; i < V; i++)
        cout << "Node " << i << " : " << dist[i] << endl;
}

int main() {
    int V = 4;
    vector<vector<pii>> g(V);
    g[0] = {{1,5},{2,3}};
    g[1] = {{3,2}};
    g[2] = {{1,1},{3,7}};
    dijkstra(V, g, 0);
}
