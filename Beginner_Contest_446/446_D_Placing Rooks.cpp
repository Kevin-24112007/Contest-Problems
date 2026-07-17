#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> operations(M);
    for (int i = 0; i < M; ++i) {
        cin >> operations[i].first >> operations[i].second;
    }

    vector<bool> row_cleared(N+1,false), col_cleared(N+1,false);

    int rem_pieces = 0;
    for (int i = M-1; i >= 0; --i) {
        int r = operations[i].first;
        int c = operations[i].second;
        if (!row_cleared[r] && !col_cleared[c]) {
            rem_pieces++;
        }
        row_cleared[r] = true;
        col_cleared[c] = true;
    }
    cout << rem_pieces << endl;
}
