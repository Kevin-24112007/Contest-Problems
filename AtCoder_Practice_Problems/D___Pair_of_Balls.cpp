//  D - Pair of Balls

#include<bits/stdc++.h>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<queue<int>> cyl(M);
    vector<queue<int>> col_pos(N+1);
    queue<int> rq;
    int removed = 0;
    for (int i = 0; i < M; i++) {
        int cnt;
        cin >> cnt;
        while (cnt--) {
            int colour;
            cin >> colour;
            cyl[i].push(colour);
        }
        int tc = cyl[i].front();
        col_pos[tc].push(i);
        if (col_pos[tc].size() == 2) {
            rq.push(tc);
        }
    }
    while (!rq.empty()) {
        int clr = rq.front();
        rq.pop();
        removed++;
        while (!col_pos[clr].empty()) {
            int i = col_pos[clr].front();
            col_pos[clr].pop();
            cyl[i].pop();
            if (cyl[i].size() > 0) {
                int nxt_clr = cyl[i].front();
                col_pos[nxt_clr].push(i);
                if (col_pos[nxt_clr].size() == 2) {
                    rq.push(nxt_clr);
                }
            }
        }
    }
    cout << (removed == N ? "Yes" : "No");;
    return 0;
}
