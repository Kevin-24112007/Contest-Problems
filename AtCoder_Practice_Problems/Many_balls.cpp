//  C - Many Balls

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    string s = "";
    while (n) {
        if (n%2 == 0) {
            n /= 2;
            s.push_back('B');
        }
        else {
            n--;
            s.push_back('A');
        }
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}