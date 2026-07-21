#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M, Y;
	cin >> N >> M >> Y;
	map<int,vector<pair<int,int>>> g;
	for(int r = 1; r <= M; r++) {
		int src, dest, t;
		cin >> src >> dest >> t;
		g[src].push_back({dest,t});
		g[dest].push_back({src,t});
	}
	g[N+1].push_back({N+2,Y});
	for(int c = 1; c <= N; c++) {
		int wgt;
		cin >> wgt;
		g[c].push_back({N+1,wgt});
		g[N+2].push_back({c,wgt});
	}
	vector<long long> tarr(N+3,LLONG_MAX);
	priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
	q.push({0LL,1});
	tarr[1] = 0;
	while(!q.empty()) {
		auto [currtime,currcity] = q.top();
		q.pop();
		if(currtime > tarr[currcity]) continue;
		for(auto lcp : g[currcity]) {
			int newcity = lcp.first;
			long long newtime = currtime + lcp.second;
			if(tarr[newcity] > newtime) {
				q.push({newtime,newcity});
				tarr[newcity] = newtime;
			}
		}
	}
	for(int c = 2; c <= N; c++) {
		cout << tarr[c] << " ";
	}
}