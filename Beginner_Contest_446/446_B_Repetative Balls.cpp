#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> max_val(M,-1);
	while(N--){
	    int c, s;
	    cin >> c >> s;
	    max_val[c-1] = max(max_val[c-1], s);
	}
	for(int n : max_val){
	    cout << n << " ";
	}
}
