#include <bits/stdc++.h>
using namespace std;

void bfs(map<int, vector<int>>& g, int n, vector<int>& dis, vector<int>& colour, int c) {
    int jump = 0;
    vector<bool> vis(dis.size()+1, false);
    queue<int> q;
    q.push(n);
    int cta = (c == 1 ? 2 : 1);
    while(!q.empty()) {
        int Q = q.size();
        for(int i = 0; i < Q; i++) {
            int node = q.front();
            q.pop();
            if(jump < dis[node]) {
                colour[node] = cta;
                dis[node] = jump;
            }
            for(int adj : g[node]) {
                if(!vis[adj]) {
                    vis[adj] = true;
                    q.push(adj);
                }
            }
            jump++;
        }
    }
}

int main() {
    int N;
    cin >> N;
    map<int,vector<int>> g;
    int u, v;
    for(int i = 0; i < N; i++) {
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<int> dis(N+1, 0), colour(N+1, 0);
    int B = 1, W = 2;
    bfs(g, 1, dis, colour, B);
    bfs(g, N, dis, colour, W);
    int b = 0, w = 0;
    for(int node = 1; node <= N; node++) {
        if(colour[node] == B) b++;
        else w++;
    }
    cout << b << " " << w;
    if(b > w) cout << "Fennec" << endl;
    else cout << "Snuke" << endl;
}