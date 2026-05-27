#include <bits/stdc++.h>
using namespace std;
#define int long long

const int MAXN = 1010; 
int arr[MAXN][MAXN]; 

void solve() {
    ifstream fin("paintbarn.in");
    ofstream fout("paintbarn.out");

    int n, k;
    fin >> n >> k;

    memset(arr, 0, sizeof(arr));

    while (n--) {
        int x1, y1, x2, y2;
        fin >> x1 >> y1 >> x2 >> y2;
        arr[x1][y1]++; 
        arr[x1][y2]--; 
        arr[x2][y1]--; 
        arr[x2][y2]++;
    }

    int countK = 0;
    for (int i = 0; i < MAXN; i++) {
        for (int j = 0; j < MAXN; j++) {
            if (i > 0) arr[i][j] += arr[i - 1][j];
            if (j > 0) arr[i][j] += arr[i][j - 1];
            if (i > 0 && j > 0) arr[i][j] -= arr[i - 1][j - 1];

            if (arr[i][j] == k) countK++; 
        }
    }

    fout << countK << "\n";
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}