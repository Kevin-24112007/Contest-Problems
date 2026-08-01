#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, n = 1;
  cin >> N;
  string s;
  cin >> s;
  int sweet = 0, pos = 0;
  for(char ch : s) {
      if(n > N) break;
      if(pos == n) {
          cout << sweet << endl;
          n++;
      }
      if(ch == 'x') pos++;
      sweet++;
  }
  while(n <= N) {
      cout << sweet << endl;
      n++;
  }
}