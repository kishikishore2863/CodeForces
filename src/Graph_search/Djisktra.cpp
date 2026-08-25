//
// Created by Kishi Kishore N on 28/04/26.
//
#include<iostream>

using namespace std;

void djisktra(int V, vector<vector<int>>&edges ,int src);

int main() {
    // int V = 3;
    // vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 3}, {0, 2, 6}};
    // int src = 2;
    // djisktra(V,edges ,src);
    // return 0;

    int number =8;
    int res = 6&3;
    cout<<res<<endl;
}

//V = 3, edges[][] = [[0, 1, 1], [1, 2, 3], [0, 2, 6]], src = 2
void  djisktra(int V, vector<vector<int>>&edges ,int src) {
    vector<vector<pair<int,int>>> adj(V);

    for (auto &e: edges) {
        int u = e[0];
        int v = e[1];
        int w = e[2];

        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }

    priority_queue<pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>> pq;
   vector<int> dist(V,INT_MAX);
    dist[src] = 0;
    pq.push({0,src});

    while (!pq.empty()) {
        auto[d,node] = pq.top();
        pq.pop();

        if (d>dist[node])continue;

        for (auto &[nextNode,wt]:adj[node]) {
            if (dist[node]+wt<dist[nextNode]) {
                dist[nextNode] = dist[node]+wt;
                pq.push({dist[nextNode],nextNode});
            }
        }

        for (int i = 0; i < V; i++) {
            cout << "Distance from " << src << " to " << i << " = " << dist[i] << endl;
        }
    }
}