#include <bits/stdc++.h>
using namespace std;

string toLow(string& str) {
    for(int i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
	int L;
	cin >> L;
	vector<long long> pos, neg;
	long long cur = 0, total = 0;
	for(int i = 0; i < L; i++) {
	    int num;
	    cin >> num;
	    if(num < 0) neg.push_back(num);
	    else pos.push_back(num);
	}
	sort(neg.rbegin(), neg.rend());
	sort(pos.begin(), pos.end());
	int p = 0, n = 0, P = pos.size(), N = neg.size();
	while(p < P || n < N) {
	    if(p < P && n < N) {
	        long long dis_neg = abs(cur - neg[n]), dis_pos = abs(cur - pos[p]);
	        if(dis_pos < dis_neg) {
	            total += dis_pos;
	            cur = pos[p];
	            p++;
	        }
	        else {
	            total += dis_neg;
	            cur = neg[n];
	            n++;
	        }
	    }
	    else if(n < N) {
	        total += abs(cur - neg[n]);
	        cur = neg[n];
	        n++;
	    }
	    else {
	        total += abs(cur - pos[p]);
	        cur = pos[p];
	        p++;
	    }
	}
	cout << total;
}