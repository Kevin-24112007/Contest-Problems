#include<bits/stdc++.h>
using namespace std;

int main() {
    int L, Q;
    cin >> L >> Q;
    set<int> cuts;
    cuts.insert(0);
    cuts.insert(L);
    while (Q--) {
        int c, x;
        cin >> c >> x;
        if (c == 1) {
            cuts.insert(x);
        }
        else {
            auto it = cuts.lower_bound(x);
            auto st = prev(it);
            cout << *it - *st << endl;
        }
    }
    return 0;
}
