//  C - Synthetic Kadomatsu

#include<bits/stdc++.h>
using namespace std;

int N, A, B, C, ans = 10000000;
void calc(vector<int>& bl, int i, int first_size, int second_size, int third_size, int first_cnt, int second_cnt, int third_cnt) {
    if (i == N) {
        if (first_cnt == 0 || second_cnt == 0 || third_cnt == 0) {
            return;
        }
        int cur = (first_cnt-1) * 10 + abs(A - first_size) + (second_cnt-1) * 10 + abs(B - second_size) + (third_cnt-1) * 10 + abs(C - third_size);
        ans = min(ans, cur);
        return;
    }
    calc(bl, i+1,first_size+bl[i], second_size, third_size, first_cnt+1, second_cnt, third_cnt);
    calc(bl, i+1, first_size, second_size+bl[i], third_size, first_cnt, second_cnt+1, third_cnt);
    calc(bl, i+1, first_size, second_size, third_size+bl[i], first_cnt, second_cnt, third_cnt+1);
    calc(bl, i+1, first_size, second_size, third_size, first_cnt, second_cnt, third_cnt);
}

int main() {
    cin >> N >> A >> B >> C;
    vector<int> bl(N);
    for (int i = 0; i < N; i++) {
        cin >> bl[i];
    }
    calc(bl, 0, 0, 0, 0, 0, 0, 0);
    cout << ans;
    return 0;
}