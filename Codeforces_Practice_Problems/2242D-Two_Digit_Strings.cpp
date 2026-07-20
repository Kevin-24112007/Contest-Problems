#include <bits\stdc++.h>
using namespace std;

string merge (string s) {
    string s1;
    s1 += s[0];
    for(int i = 1; i < s.size(); i++) {
        s1 += (((s[i]-'0') + (s1[i-1]-'0'))%10) + '0';
    }
    return s1;
}

int generate (string s1, string s2, int R, int C) {
    vector<vector<int>> DP(R+1,vector<int>(C+1,0));
    for(int r = 1; r <= R; r++) {
        for(int c = 1; c <= C; c++) {
            if(s1[r-1] == s2[c-1]) {
                DP[r][c] = DP[r-1][c-1] + 1;
            }
            else {
                DP[r][c] = max(DP[r-1][c],DP[r][c-1]);
            }
        }
    }
    return DP[R][C];
}

int main() {
    int tests;
    cin >> tests;
    while(tests--) {
        string a, b;
        cin >> a >> b;
        string a1, b1;
        a1 = merge(a);
        b1 = merge(b);
        int A = a1.size(), B = b1.size();
        if(a1[A-1] == b1[B-1]) {
            cout << generate(a1,b1,A,B) << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
}