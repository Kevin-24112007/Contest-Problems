#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ll N;
	cin >> N;
	vector<ll> a(N);
	for(int i = 0; i < N; i++) cin >> a[i];
	vector<ll> ua;
	unordered_map<ll,ll> hash;
	for(int i = 0; i < N; i++) {
		hash[a[i]]++;
		if(hash[a[i]] == 1) ua.push_back(a[i]);
	}
	ll ans = (1LL) * (N * (N-1) * (N-2))/6;
	for(ll n : ua) {
		if(hash[n] > 1) {
			ll nc = hash[n];
			ans -= (nc * (nc-1))/2 * (N-nc);
		}
		if(hash[n] > 2) {
			ll nc = hash[n];
			ans -= (nc * (nc-1) * (nc-2))/6;
		}
	}
	cout << ans;
}