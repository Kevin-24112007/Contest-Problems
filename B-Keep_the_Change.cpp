#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    long long total = 0;
    while(N--) {
        int A, B;
        string s;
        cin >> A >> B >> s;
        if(s == "keep") total += (B-A);
    }
    cout << total << endl;
    return 0;
}
