//
// Created by Kishi Kishore N on 24/04/26.
//
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int seen[5];
    for (int i:seen)cout<<i<<endl;
    return 0;
}

vector<tuple<int,int,int>> primsSol(int V, vector<vector<int>>adj[]) {
    priority_queue<tuple<int,int,int>,
    vector<tuple<int,int,int>>,
    greater<tuple<int,int,int>>> queue;

    int seen[V];


}

