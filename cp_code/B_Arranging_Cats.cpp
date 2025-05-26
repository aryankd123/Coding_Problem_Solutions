#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n;  
        
        string s, f;
        cin >> s; 
        cin >> f;  
        
        int excess_cats = 0;  
        int missing_cats = 0;  
    
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1' && f[i] == '0') {
                excess_cats++; 
            } else if (s[i] == '0' && f[i] == '1') {
                missing_cats++; 
            }
        }

        cout << max(excess_cats, missing_cats) << endl;
    }

    return 0;
}