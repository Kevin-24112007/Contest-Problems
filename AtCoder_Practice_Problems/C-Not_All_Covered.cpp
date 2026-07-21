#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	vector<int> range(N+2,0);
	while(M--) {
		int l, r;
		cin >> l >> r;
		range[l]++;
		range[r+1]--;
	}
	int min_val = INT_MAX;
	for(int i = 1; i <= N	; i++){
		range[i] += range[i-1];
		min_val = min(min_val, range[i]);
	}
	cout << min_val;
}