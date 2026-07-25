#include <bits/stdc++.h>
using namespace std;

long long check(string& s, int l, int r, int N) {
    long long count = 0;
    int mismatches = 0;
    while(l >= 0 && r < N) {
        if(s[l] != s[r]) mismatches++;
        if(mismatches > 1) break;
        count++;
        l--;
        r++;
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    int N = s.size();
    long long total = 0;
    for(int i = 0; i < N; i++) {
        total += check(s,i,i,N);
        total += check(s,i,i+1,N);
    }
    cout << total;
}