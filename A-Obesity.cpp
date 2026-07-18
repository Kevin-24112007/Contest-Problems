#include <bits/stdc++.h> 
using namespace std; 

int main() { 
    long long H, W; 
    cin >> H >> W; 
    if(10000 * W >= 25 * H * H) { 
        cout << "Yes"; 
    }
    else { 
        cout << "No"; 
    } 
    return 0;
}
