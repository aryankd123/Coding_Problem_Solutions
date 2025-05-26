#include <bits/stdc++.h>
using namespace std;

#define int long long

int count_pairs_less_than_equal_to_x(const vector<int>& a, const vector<int>& b, int X) {
    int n = a.size();
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        
        int target = X - a[i];
   
        int pos = upper_bound(b.begin(), b.end(), target) - b.begin();
        
        count += pos; }
    
    return count;
}

int find_kth_sum(const vector<int>& a, const vector<int>& b, int k) {
    int n = a.size();
    
    vector<int> sorted_a = a;
    vector<int> sorted_b = b;
    sort(sorted_a.begin(), sorted_a.end());
    sort(sorted_b.begin(), sorted_b.end());

   
    int low = sorted_a[0] + sorted_b[0];
    int high = sorted_a[n - 1] + sorted_b[n - 1];
    
    while (low < high) {
        int mid = (low + high) / 2;
        
        
        int count = count_pairs_less_than_equal_to_x(sorted_a, sorted_b, mid);
        
        if (count >= k) {
            high = mid; 
        } else {
            low = mid + 1; 
        }
    }
    
    return low;
}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
  
    int result = find_kth_sum(a, b, k);
    cout << result << "\n";
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(0);
    solve();
    return 0;
}