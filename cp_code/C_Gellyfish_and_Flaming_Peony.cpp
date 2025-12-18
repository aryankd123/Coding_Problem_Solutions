// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Function that finds the prime
// factors of a number
vector<int> findPrimeFactors(int n)
{
    // To store the prime factor
    vector<int> primeFactors(9, 0);

    int j = 0;

    // 2s that divide n
    if (n % 2 == 0) {
        primeFactors[j++] = 2;
        while (n % 2 == 0)
            n >>= 1;
    }

    // N must be odd at this point
    // Skip one element
    for (int i = 3;
         i * i <= n; i += 2) {

        if (n % i == 0) {

            // Update the prime factor
            primeFactors[j++] = i;
            while (n % i == 0)
                n /= i;
        }
    }

    // If n is a prime number
    // greater than 2
    if (n > 2)
        primeFactors[j++] = n;
    
    vector<int> PrimeFactors(j);
    
    for(int i = 0; i < j; i++)
    {
        PrimeFactors[i] = primeFactors[i];
    }
    
    return PrimeFactors;
}

// Function that finds the shortest
// subsequence
void findShortestSubsequence(vector<int> &dp, vector<int> a,
                        int index, vector<int> primeFactors)
{
    int n = a.size();

    for (int j = index; j < n; j++) {
        int bitmask = 0;

        for (int p = 0;
             p < primeFactors.size(); p++) {

            // Check if the prime factor
            // of first number, is also
            // the prime factor of the
            // rest numbers in array
            if ((a[j] % primeFactors[p]) == 0) {

                // Set corresponding bit
                // of prime factor to 1,
                // it means both these
                // numbers have the
                // same prime factor
                bitmask ^= (1 << p);
            }
        }

        for (int i = 0; i < dp.size(); i++) {

            // If no states encountered
            // so far continue for this
            // combination of bits
            if (dp[i] == n + 1)
                continue;

            // Update this state with
            // minimum ways to reach
            // this state
            dp[bitmask & i]
                = min(dp[bitmask & i],
                           dp[i] + 1);
        }
    }
}

// Function that print the minimum
// length of subsequence
int printMinimumLength(vector<int> & a)
{
    int Min = a.size() + 1;

    for (int i = 0; i < a.size() - 1; i++) {

        // Find the prime factors of
        // the first number
        vector<int> primeFactors
            = findPrimeFactors(a[i]);

        int n = primeFactors.size();
    
        // Initialize the array with
        // maximum steps, size of the
        // array + 1 for instance
        vector<int> dp(1 << n, a.size() + 1);

        // Express the prime factors
        // in bit representation

        // Total number of set bits is
        // equal to the total number
        // of prime factors
        int setBits = (1 << n) - 1;

        // Indicates there is one
        // way to reach the number
        // under consideration
        dp[setBits] = 1;
        findShortestSubsequence(dp, a, i + 1,
                                primeFactors);

        // State 0 corresponds
        // to gcd of 1
        Min = min(dp[0], Min);
    }

    // If not found such subsequence
    // then print "-1"
    if (Min == (a.size() + 1))
    return -1;

    // Else print the length
    else return Min;
       
}

// Driver code
int main()
{
    // Given array arr[]
    // vector<int> arr = { 2, 6, 12, 3 };
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int flag=v[0];
    for(int i=1;i<n;i++){
    flag=gcd(flag,v[i]);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]==flag)cnt++;
        else v[i]/=flag;
    }
    if(cnt>0){cout<<n-cnt<<'\n';continue;}

    
    // Function Call
    int l =printMinimumLength(v);
    cout<<l-1+n-1<<'\n';
   
    }
    return 0;
    
}
