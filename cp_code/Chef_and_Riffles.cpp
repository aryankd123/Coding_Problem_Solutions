#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);

void riffleShuffle(vector<int>& arr) {
    int N = arr.size();
    vector<int> temp(N);
    int mid = N / 2;
    
    for (int i = 0, j = 0; j < mid; j++) {
        temp[i++] = arr[j];
        temp[i++] = arr[j + mid];
    }
    
    arr = temp;
}

vector<int> findFinalPermutation(int N, int K) {
    vector<int> perm(N);
    iota(perm.begin(), perm.end(), 1);  // Identity permutation (1, 2, ..., N)
    
    vector<int> original = perm;
    int cycleLength = 0;

    do {
        riffleShuffle(perm);
        cycleLength++;
    } while (perm != original);
    
    K %= cycleLength;  // Reduce K using cycle length
    
    for (int i = 0; i < K; i++) {
        riffleShuffle(original);
    }
    
    return original;
}

signed main() {
    FAST_IO;
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> result = findFinalPermutation(N, K);
        for (int num : result) {
            cout << num << " ";
        }
        cout << "\n";
    }

    return 0;
}