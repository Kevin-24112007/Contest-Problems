#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string s;
  cin >> s;
  int count = 0;
  if(N == 1) { 
    if(s[0] == 'x') cout << 1;
    else cout << 0;
    return 0; 
  } 
  if(s[0] == 'x' && s[1] == 'x') count++;
  if(s[N-1] == 'x' && s[N-2] == 'x') count++;
  for(int i = 1; i < N-1; i++) {
      if(s[i] == 'x' && s[i-1] == 'x' && s[i+1] == 'x') count++;
  }
  cout << count;
}