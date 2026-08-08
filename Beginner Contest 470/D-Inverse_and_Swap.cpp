#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> p(N), inv(N);
    for(int i = 0; i < N; i++) {
        cin >> p[i];
        inv[p[i]-1] = i + 1;
    }
    int count = 0;
    while(Q--) {
        int type;
        cin >> type;
        if(type == 1) {
            int x, y;
            cin >> x >> y;
            if(count%2 == 0) {
                int val1 = p[x-1];
                int val2 = p[y-1];
                swap(p[x-1], p[y-1]);
                swap(inv[val1-1], inv[val2-1]);
            }
            else {
                int val1 = inv[x-1];
                int val2 = inv[y-1];
                swap(inv[x-1], inv[y-1]);
                swap(p[val1-1], p[val2-1]);
            }
        }
        else {
            count++;
        }
    }
    if(count%2 == 1) {
        for(int i = 0; i < N; i++) {
            cout << inv[i] << " ";
        }
    } else {
        for(int i = 0; i < N; i++) {
            cout << p[i] << " ";
        }
    }
}
