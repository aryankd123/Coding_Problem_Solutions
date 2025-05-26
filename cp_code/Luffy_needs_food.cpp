#include <bits/stdc++.h>
using namespace std;

#define int long long
priority_queue<int> pq;  // Max-heap to store food values of islands

void solve() {
    int n, K, F;
    cin >> n;  // Number of islands
    cin >> K >> F;  // Distance to Grandline and initial food

    vector<pair<int, int>> islands;  // (distance, food)
    for(int i = 0; i < n; i++) {
        int D, A;
        cin >> D >> A;
        islands.push_back({K - D, A});  // Convert distance from Grandline to distance from start
    }

    // Sort islands by distance from start, which is K - Di
    sort(islands.rbegin(), islands.rend());

    int current_food = F, current_distance = 0, stops = 0;

    for(auto& island : islands) {
        int dist = island.first, food = island.second;
        int distance_to_travel = dist - current_distance;

        // If we need more food to reach the current island
        while(current_food < distance_to_travel) {
            if(pq.empty()) {
                cout << -1 << endl;  // Cannot make it to Grandline
                return;
            }
            // Take the food from the island with the maximum food
            current_food += pq.top();
            pq.pop();
            stops++;
        }

        // Update food after traveling to this island
        current_food -= distance_to_travel;
        current_distance = dist;
        
        // Add the current island's food to the max-heap
        pq.push(food);
    }

    // After processing all islands, check if we can reach the Grandline
    if(current_food < K - current_distance) {
        while(current_food < K - current_distance) {
            if(pq.empty()) {
                cout << -1 << endl;  // Cannot make it to Grandline
                return;
            }
            // Take the food from the island with the maximum food
            current_food += pq.top();
            pq.pop();
            stops++;
        }
    }

    // If we reach here, it means Luffy can reach the Grandline
    cout << stops << endl;
}

signed main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}