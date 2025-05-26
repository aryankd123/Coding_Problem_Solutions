#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Function to compute the sieve of Eratosthenes and return a list of primes up to a given limit
vector<bool> sieve(int limit) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= limit; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return is_prime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    // Find all primes up to sqrt(10^12) = 10^6
    int max_limit = 1000000;
    vector<bool> is_prime = sieve(max_limit);
    
    // Set to store all T-primes
    set<long long> t_primes;
    
    // Add squares of all primes up to 10^6 to the T-primes set
    for (int i = 2; i <= max_limit; ++i) {
        if (is_prime[i]) {
            t_primes.insert((long long)i * i);
        }
    }
    
    // Process the input and check each number
    while (n--) {
        long long x;
        cin >> x;
        
        if (t_primes.find(x) != t_primes.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}