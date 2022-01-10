#include<iostream>
#include<vector>
#define MAXN 1001

std::vector<int> adj[MAXN];
std::vector<int> visited(MAXN, false);

int main(){
    int num_v, num_e;
    freopen("graph.inp", "r", stdin);
    std::cin >> num_v >> num_e;
    for (int i = 0; i < num_e; i++){
        int u, v;
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0;
}