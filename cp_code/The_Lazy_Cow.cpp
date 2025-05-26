#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAXN = 405; 
int grid[MAXN][MAXN]; 
int prefix[MAXN][MAXN];  

int getRangeSum(int r, int cl, int cr) {
    if (cl > cr) return 0;
    return prefix[r][cr] - (cl > 0 ? prefix[r][cl - 1] : 0);
}

signed main() {
    ifstream fin("lazy.in");
    ofstream fout("lazy.out");

    int N, K;
    fin >> N >> K;

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            fin >> grid[r][c];
        }
    }
    for (int r = 0; r < N; r++) {
        prefix[r][0] = grid[r][0];
        for (int c = 1; c < N; c++) {
            prefix[r][c] = prefix[r][c - 1] + grid[r][c];
        }
    }

    int maxGrass = 0;

    for (int r = 0; r < N; r++) {
        for (int c = 0; c < N; c++) {
            int totalGrass = 0;

            for (int row = max(0LL, r - K); row <= min(N - 1, r + K); row++) {
                int width = K - abs(row - r);
                int leftCol = max(0LL, c - width);
                int rightCol = min(N - 1, c + width);

                totalGrass += getRangeSum(row, leftCol, rightCol);
            }

            maxGrass = max(maxGrass, totalGrass);
        }
    }

    fout << maxGrass << "\n";
    return 0;
}