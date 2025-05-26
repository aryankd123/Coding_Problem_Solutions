#include <bits/stdc++.h>
using namespace std;

#define int long long

bool can_split(const vector<int>& arr, int n, int k, int max_sum) {
    int current_sum = 0;
    int segments = 1;
    
    for (int i = 0; i < n; i++) {
        if (current_sum + arr[i] > max_sum) {
            segments++;
            current_sum = arr[i];
            if (segments > k) {
                return false;
            }
        } else {
            current_sum += arr[i];
        }
    }
    return true; 
}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    int sum = 0;
    int max_val = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        max_val = max(max_val, arr[i]); 
    }

    int left = max_val, right = sum;
    int result = right;

    while (left <= right) {
        int mid = (left + right) / 2;
        
        if (can_split(arr, n, k, mid)) {
            result = mid;
            right = mid - 1; 
        } else {
            left = mid + 1; 
        }
    }
    
    cout << result << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    solve();
    
    return 0;
}