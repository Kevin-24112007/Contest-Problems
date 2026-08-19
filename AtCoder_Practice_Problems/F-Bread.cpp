//  F - Bread

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int N;
    ll L;
    cin >> N >> L;
    ll sum = 0LL;
    priority_queue<ll, vector<ll>, greater<>> q;
    for (int c = 1; c <= N; c++) {
        int cur;
        cin >> cur;
        sum += cur;
        q.push(cur);
    }
    if (sum < L) {
        q.push(L-sum);
    }
    ll ans = 0LL;
    while (q.size() > 1) {
        ll merged = q.top();
        q.pop();
        merged += q.top();
        q.pop();
        q.push(merged);
        ans += merged;
    }
    cout << ans;
    return 0;
}   