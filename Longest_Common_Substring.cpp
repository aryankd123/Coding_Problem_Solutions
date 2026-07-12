#include <bits/stdc++.h>
using namespace std;
#define int long long

// Verified Safe Primes and Modulos
const int p1 = 31, m1 = 1e9 + 7;
const int p2 = 37, m2 = 1e9 + 9;
const int MAXN = 5e5 + 5;

vector<int> pw1(MAXN, 1), pw2(MAXN, 1);

void precompute() {
    for (int i = 1; i < MAXN; i++) {
        pw1[i] = (pw1[i - 1] * p1) % m1;
        pw2[i] = (pw2[i - 1] * p2) % m2;
    }
}

// Global variables to store the best answer
int best_a = 0, best_b = 0, best_c = 0, best_d = 0;

// O(1) Substring Hash Extraction
int get_hash(const vector<int>& h, const vector<int>& pw, int L, int R, int m) {
    int val = (h[R + 1] - (h[L] * pw[R - L + 1]) % m + m) % m;
    return val;
}

bool check(int len, const string& S, const string& T, 
           const vector<int>& hS1, const vector<int>& hS2, 
           const vector<int>& hT1, const vector<int>& hT2) {
    
    // Store hashes of S along with their starting indices
    // Format: {{hash1, hash2}, start_index}
    vector<pair<pair<int, int>, int>> vp;
    vp.reserve(S.length() - len + 1); // Prevents dynamic reallocation overhead

    for (int i = 0; i <= S.length() - len; i++) {
        int hash1 = get_hash(hS1, pw1, i, i + len - 1, m1);
        int hash2 = get_hash(hS2, pw2, i, i + len - 1, m2);
        vp.push_back({{hash1, hash2}, i});
    }

    // Sort to enable O(log N) binary search
    sort(vp.begin(), vp.end());

    // Check every substring of T against the sorted hashes of S
    for (int i = 0; i <= T.length() - len; i++) {
        int hash1 = get_hash(hT1, pw1, i, i + len - 1, m1);
        int hash2 = get_hash(hT2, pw2, i, i + len - 1, m2);

        // Dummy search target (using -1 for index so it finds the first matching hash pair)
        pair<pair<int, int>, int> target = {{hash1, hash2}, -1};
        
        // Binary Search
        auto it = lower_bound(vp.begin(), vp.end(), target);
        
        // If found and hashes exactly match
        if (it != vp.end() && it->first.first == hash1 && it->first.second == hash2) {
            best_a = it->second;
            best_b = best_a + len;
            best_c = i;
            best_d = best_c + len;
            return true;
        }
    }
    return false;
}

void solve() {
    string S, T;
    cin >> S >> T;

    int n1 = S.length();
    int n2 = T.length();

    // 1-based prefix hash arrays
    vector<int> hS1(n1 + 1, 0), hS2(n1 + 1, 0);
    vector<int> hT1(n2 + 1, 0), hT2(n2 + 1, 0);

    for (int i = 0; i < n1; i++) {
        hS1[i + 1] = (hS1[i] * p1 + (S[i] - 'a' + 1)) % m1;
        hS2[i + 1] = (hS2[i] * p2 + (S[i] - 'a' + 1)) % m2;
    }
    for (int i = 0; i < n2; i++) {
        hT1[i + 1] = (hT1[i] * p1 + (T[i] - 'a' + 1)) % m1;
        hT2[i + 1] = (hT2[i] * p2 + (T[i] - 'a' + 1)) % m2;
    }

    // Binary Search on Answer Length
    int low = 1, high = min(n1, n2);
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (check(mid, S, T, hS1, hS2, hT1, hT2)) {
            // Found a common substring of length 'mid', try to find a longer one
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Global variables best_a, best_b, best_c, best_d are updated inside check()
    cout << best_a << " " << best_b << " " << best_c << " " << best_d << "\n";
}

signed main() {
    // Fast I/O is critical for 5e5 constraints
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    solve();
    
    return 0;
}