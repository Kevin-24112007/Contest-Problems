#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	bool flag = true;
	while(N--){
	    int val;
	    cin >> val;
	    if(val >= 0) flag = false;
	}
    if(flag) cout << "Yes";
    else cout << "No";
}
