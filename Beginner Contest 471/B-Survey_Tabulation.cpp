#include <bits/stdc++.h>
using namespace std;

string toLow(string& str) {
    for(int i = 0; i < str.size(); i++) {
        str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
	int N;
	cin >> N;
	int max_val = 0;
	unordered_map<string,int> hash;
	for(int i = 0; i < N; i++) {
	    string s;
	    cin >> s;
	    s = toLow(s);
	    hash[s]++;
	    max_val = max(max_val, hash[s]);
	}
	cout << max_val;
}