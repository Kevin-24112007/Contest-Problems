#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(N-1);
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N-1; i++) cin >> B[i];
    vector<int> need(N-1);
    for(int i = 0; i < N-1; i++) {
        int cur = (A[i] + A[i+1]) % M;
        need[i] = (B[i] - cur + M) % M;
    }
    long long ans = LLONG_MAX;
    for(int first = 0; first < M; first++) {
        vector<int> inc(N);
        inc[0] = first;
        for(int i = 0; i < N - 1; i++) {
            inc[i+1] = (need[i] - inc[i] + M) % M;
        }
        if((inc[N-2] + inc[N-1]) % M != need[N-2]) continue;
        long long sum = 0;
        for(int x : inc)
            sum += x;
        ans = min(ans,sum);
    }
    cout << ans << endl;
    return 0;
}
