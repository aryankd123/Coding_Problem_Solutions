#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6;
const int highest = 1e6;

int subsets(string& nums) {
    int n = nums.size();
    int subset_ct = (1 << (n - 1));
    int sum = 0;

    for (int mask = 0; mask < subset_ct; mask++) {
        string subset;
        
        for (int i = 0; i < n; i++) {
            if (((mask & (1 << i)) != 0 && (mask & (1 << (i + 1))) == 0) || 
                ((mask & (1 << i)) == 0 && (mask & (1 << (i + 1))) != 0) && (i + 1 < n)) {
                subset.push_back(nums[i]);
                subset.push_back('+');
            }
            else {
                subset.push_back(nums[i]);
            }
        }
        
        stringstream ss(subset);
        string temp;
        
        while (getline(ss, temp, '+')) {
            try {
                sum += stoll(temp);  
            } catch (const invalid_argument& e) {
                continue; 
            } catch (const out_of_range& e) {
                continue; 
            }
        }
    }
    
    return sum;
}

void solve() {
    string s;
    cin >> s;

    int answer = subsets(s);
    cout << answer << '\n';
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
    return 0;
}