#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    long long ans = 0;
    map<int,int> r;
    int rem = 0, pv = 1, MOD = 2019;
    r[0] = 1;
    for(int i = s.size()-1; i >= 0; i--) {
        rem = (rem + (s[i]-'0') * pv) % MOD;
        if(r.find(rem) != r.end()) {
            ans += r[rem];
            r[rem]++;
        }
        else {
            r[rem] = 1;
        }
        pv = (pv*10) % MOD;
    }
    cout << ans << endl;
}