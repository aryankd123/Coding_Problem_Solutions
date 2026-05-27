#include <bits/stdc++.h>
using namespace std;
#define int long long

const int SIZE = 2023;
vector<vector<int>> pyramid(SIZE, vector<int>(SIZE, 0));

void generatePyramid() {
    int num = 1;

    for (int i = 0; i < SIZE; i++) {
        for (int j = (i % 2 == 0) ? 0 : 1; j <= i; j += 2) {
            pyramid[i][j] = num * num; // Square of num
            num++;
        }
    }
}

void printPyramid() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << setw(4) << pyramid[i][j] << " ";
        }
        cout << '\n';
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    generatePyramid();
    printPyramid();

    return 0;
}