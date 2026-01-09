#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;

int main() {
    int V = 4;
    vector<vector<pii>> g(V);
    g[0]={{1,10},{2,6}};
    g[1]={{0,10},{3,5}};
    g[2]={{0,6},{3,15}};
    g[3]={{1,5},{2,15}};

    vector<bool> mst(V,false);
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    pq.push({0,0});

    int cost = 0;
    while(!pq.empty()) {
        auto [w,u] = pq.top(); pq.pop();
        if(mst[u]) continue;
        mst[u]=true;
        cost += w;
        for(auto e:g[u])
            if(!mst[e.first])
                pq.push({e.second,e.first});
    }
    cout << "Minimum Cost = " << cost;
}
