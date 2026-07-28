#include<bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	vector<int> a(N);
	for(int i = 0; i < N; i++) cin >> a[i];
	
	sort(a.begin(),a.end());
	
	long long ans=0;
	for(int i = 0; i < N; i++) {
		int h = a.end() - upper_bound(a.begin(), a.end(), a[i]);
		int l = lower_bound(a.begin(), a.end(), a[i]) - a.begin();
		ans += (1LL) * h * l;	
	}
	cout<<ans;
}