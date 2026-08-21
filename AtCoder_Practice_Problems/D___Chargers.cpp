//  D - Chargers

#include<bits/stdc++.h>
using namespace std;

int main() {
    int Q, V;
    cin >> Q >> V;
    priority_queue<int> q;
    while (Q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int time, charge;
            cin >> time >> charge;
            q.push(charge - time);
        }
        else {
            int t;
            cin >> t;
            if (!q.empty()) {
                cout << min(V, q.top() + t) << endl;
                q.pop();
            }
            else cout << -1 << endl;
        }
    }
    return 0;
}
