#include <bits/stdc++.h>
using namespace std;

int main() {
	 int M, D;
	 cin >> M >> D;
	 string s;
	 cin >> s;
	 vector<bool> seen(M,false);
	 for(int i = 0; i < M; ++i) {
        if(s[i] == 'G') {
            int st = max(0,i - D);
            int end = min(M-1,i + D);
            for(int idx = st; idx <= end; idx++) {
                seen[idx] = true;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < M; i++) {
    	if(!seen[i]) count++;
    }
    cout << count;
}