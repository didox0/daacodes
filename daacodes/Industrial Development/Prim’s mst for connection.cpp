#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int, int> pii; // (weight, vertex)

void primMST(int V, vector<vector<pii>> &graph) {
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<bool> inMST(V, false);

    int start = 0;
    pq.push({0, start});
    int totalCost = 0;

    while (!pq.empty()) {
        int weight = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if (inMST[u]) continue;

        inMST[u] = true;
        totalCost += weight;

        for (auto edge : graph[u]) {
            int v = edge.first;
            int w = edge.second;
            if (!inMST[v]) {
                pq.push({w, v});
            }
        }
    }

    cout << "Minimum Network Cost (Prim's MST): "
         << totalCost << endl;
}

int main() {
    int V = 5;
    vector<vector<pii>> graph(V);

    // (destination, cost)
    graph[0].push_back({1, 10});
    graph[1].push_back({0, 10});

    graph[0].push_back({2, 5});
    graph[2].push_back({0, 5});

    graph[1].push_back({2, 2});
    graph[2].push_back({1, 2});

    graph[1].push_back({3, 1});
    graph[3].push_back({1, 1});

    graph[2].push_back({4, 9});
    graph[4].push_back({2, 9});

    primMST(V, graph);

    cout << "Industrial Growth: 80%\n";
    return 0;
}
