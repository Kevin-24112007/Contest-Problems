#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long px, py, qx, qy, rx, ry, sx, sy;
        cin >> px >> py >> qx >> qy >> rx >> ry >> sx >> sy;
        long long vx1 = qx - px, vy1 = qy - py;
        long long vx2 = sx - rx, vy2 = sy - ry;
        long long cross1 = vx1 * vy2 - vy1 * vx2;
        if(cross1 != 0) cout << "Yes" << endl;
        else{
            long long mx1 = px + qx, my1 = py + qy;
            long long mx2 = rx + sx, my2 = ry + sy;
            long long dx = mx2 - mx1;
            long long dy = my2 - my1;
            long long dot = dx * vx1 + dy * vy1;
            if (dot == 0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}