//  D - Candy Distribution

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int N, M;
    cin >> N >> M;
    map<ll,ll> cnt;
    cnt[0] = 1;
    ll mod = 0;
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ll cur;
        cin >> cur;
        mod = (cur + mod) % M;
        if (cnt.find(mod) != cnt.end()) {
            ans += cnt[mod];
            cnt[mod]++;
        }
        else cnt[mod] = 1;
    }
    cout << ans;
    return 0;
}
