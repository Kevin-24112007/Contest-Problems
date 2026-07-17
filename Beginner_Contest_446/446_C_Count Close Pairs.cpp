#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long total = 0;
    int right = 2;
    for(int left = 1; left <= N; left++){ 
        if(right <= left) right = left+1;
        while(right <= N){
            cout << "? " << left << " " << right << "\n";
            cout.flush();
            
            string responce;
            cin >> responce;
            if(responce == "Yes") right++;
            else break;
        }
        total += (right-left-1);
    }
    cout << "! " << total << "\n";
    cout.flush();
}
