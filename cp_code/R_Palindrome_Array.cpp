#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(vector<int>& A, int i, int j) {
    while (i < j) { 
        if (A[i] != A[j]) return false;
        i++;
        j--;
    }
    return true;
}

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    if (is_palindrome(A, 0, N - 1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}