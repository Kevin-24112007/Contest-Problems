#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    vector<vector<int>> grid(H+1, vector<int>(W+1,0));
    for (int r = 1; r <= H; r++) {
        string s;
        cin >> s;
        for (int c = 1; c <= W; c++) {
            grid[r][c] = s[c-1]-'0';
        }
    }
    for (int r = 1; r <= H; r++) {
        for (int c = 2; c <= W; c++) {
            grid[r][c] += grid[r][c-1];
        }
    }
    for (int c = 1; c <= W; c++) {
        for (int r = 2; r <= H; r++) {
            grid[r][c] += grid[r-1][c];
        }
    }
    long long ans = 0;
    for (int row = 1; row <= H; row++) {
        for (int col = 1; col <= W; col++) {
            for (int a = 0; a < row; a++) {
                for (int b = 0; b < col; b++) {
                    int sum = grid[row][col] - grid[row][b] - grid[a][col]+ grid[a][b];
                    if (sum == K) ans++;
                }
            }
        }
    }
    cout << ans << endl;
}
