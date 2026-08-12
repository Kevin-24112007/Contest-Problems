#include <bits/stdc++.h>
using namespace std;

#define INF 1e18

int main() {
    int A, B, Q;
    cin >> A >> B >> Q;
    vector<long long> s(A), t(B);
    for(int i = 0; i < A; i++) cin >> s[i];
    for(int i = 0; i < B; i++) cin >> t[i];
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    while(Q--) {
        long long pt;
        cin >> pt;
        long long ans = INF;
        auto sr = lower_bound(s.begin(), s.end(), pt);
        auto sl = (sr != s.begin()) ? prev(sr) : sr;
        auto tr = lower_bound(t.begin(), t.end(), pt);
        auto tl = (tr != t.begin()) ? prev(tr) : tr;
        if(sr != s.end() && tr != t.end()) {
            ans = max(*sr, *tr) - pt;
        }
        if(*sl <= pt && *tl <= pt) {
            long long cur = pt - min(*sl, *tl);
            ans = min(ans, cur);
        }
        if(sr != s.end() && *tl <= pt) {
            long long cur = min(pt - *tl, *sr - pt) + (*sr - *tl);
            ans = min(ans, cur);
        }
        if(*sl <= pt && tr != t.end()) {
            long long cur = min(pt - *sl, *tr - pt) + (*tr - *sl);
            ans = min(ans, cur);
        }
        cout << ans << endl;
    }
}
