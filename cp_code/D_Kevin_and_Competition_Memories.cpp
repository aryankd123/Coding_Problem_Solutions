#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to solve each test case
vector<int> solveTestCase(int n, int m, vector<int>& a, vector<int>& b) {
    // Sort the participants' ratings and the problems' difficulties
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Calculate the number of problems each participant can solve
    vector<int> solvableProblems(n);
    for (int i = 0; i < n; ++i) {
        solvableProblems[i] = upper_bound(b.begin(), b.end(), a[i]) - b.begin();
    }

    // Calculate rank differences for each problem difficulty
    vector<int> rankDifferences(m);
    int j = 0;
    for (int i = 0; i < m; ++i) {
        // For problem b[i], count how many participants can solve it
        while (j < n && a[j] < b[i]) {
            ++j;  // Move j until we find a participant who can solve the problem
        }
        rankDifferences[i] = n - j;  // The number of participants who can solve this problem
    }

    // Sort the rank differences in descending order to minimize Kevin's rank
    sort(rankDifferences.rbegin(), rankDifferences.rend());

    // Calculate the minimum sum of ranks for each k
    vector<int> result(m);
    for (int k = 1; k <= m; ++k) {
        int numContests = m / k; // Number of contests
        int rankSum = 0;

        // Accumulate the rank sums using the sorted rank differences
        for (int i = 0; i < numContests; ++i) {
            rankSum += (rankDifferences[i] + 1); // The rank is 1 + number of people who solved more problems than Kevin
        }

        // Store the result for this value of k
        result[k - 1] = rankSum;
    }

    return result;
}

int main() {
    ios::sync_with_stdio(false);  // For faster input/output
    cin.tie(nullptr);
    
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n, m;
        cin >> n >> m;  // Number of participants and problems
        
        vector<int> a(n);  // Participant ratings
        vector<int> b(m);  // Problem difficulties
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }
        
        // Solve the current test case
        vector<int> result = solveTestCase(n, m, a, b);
        
        // Output the result for this test case
        for (int i = 0; i < m; ++i) {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}