#include <bits/stdc++.h>
using namespace std;

void bfs(int V, vector<vector<int>> &g, int s) {
    vector<bool> vis(V,false);
    queue<int> q;

    vis[s] = true;
    q.push(s);

    while(!q.empty()) {
        int u = q.front(); q.pop();
        cout << u << " ";
        for(int v : g[u]) {
            if(!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    vector<vector<int>> g = {{1,2},{3},{},{}}; 
    bfs(4, g, 0);
}
