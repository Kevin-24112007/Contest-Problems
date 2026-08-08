#include <bits/stdc++.h>
using namespace std;

int main() {
	 int N;
	 cin >> N;
	 vector<int> hash(N+1, 0);
	 int max_c = 0, n;
	 for(int i = 0; i < N; i++) {
	     cin >> n;
	     hash[n]++;
	     max_c = max(max_c, hash[n]);
	 }
	 cout << N-max_c;
}