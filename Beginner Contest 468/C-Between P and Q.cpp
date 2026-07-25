#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> p(N), q(N);
    for(int i = 0; i < N; i++) cin >> p[i];
    for(int i = 0; i < N; i++) cin >> q[i];
    if(p >= q) {
        cout << 0;
        return 0;
    }
    vector<int> curr = p;
    int count = 0;
    while(next_permutation(curr.begin(), curr.end())) {
        if(curr < q) count++;
        else break;
    }
    cout << count;
}