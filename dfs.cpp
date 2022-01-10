#include<iostream>
#include<vector>
#define MAXN 1001

int cnt = 0;
std::vector<int> adj[MAXN];
std::vector<int> visited(MAXN, false);

void dfs(int start){
    visited[start] = true;
    for (int i = 0; i < adj[start].size(); i++){
        int v = adj[start][i];
        if (!visited[v]){
            dfs(v);
        }
    }
}

int main(){
    int num_v, num_e;

    // Read an undirected graph
    freopen("graph.inp", "r", stdin);
    std::cin >> num_v >> num_e; // number of vertices and edges
    for (int i = 0; i < num_e; i++){
        int u, v;

        // add a pair of vertices to adjacent lists
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // DFS to find the number of connected component
    for (int v = 1; v <= num_v; v++){
        if (!visited[v]){
            cnt++;
            dfs(v);
        }
    }

    // Print total number of connected component
    std::cout << "total = " << cnt << std::endl;
    return 0;
}