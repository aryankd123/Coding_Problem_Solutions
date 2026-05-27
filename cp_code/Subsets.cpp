#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> v;

void subset_gen(vector<int>& nums, vector<int> subset, vector<int>::iterator it) {
    if (it == nums.end()) {
        v.push_back(subset);
        return;
    }

    
    subset.push_back(*it);
    subset_gen(nums, subset, it ++);

    it--;
    subset.pop_back();
    subset_gen(nums, subset, it ++);
}

void solve() {
    vector<int> nums = {1, 2, 3};
    vector<int> subset;

    
    subset_gen(nums, subset, nums.begin());

    
    for (const auto& subset : v) {
        for (int x : subset) {
            cout << x << " ";
        }
        cout << endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}