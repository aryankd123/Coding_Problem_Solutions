#include <iostream>
#include <sstream> // For std::istringstream
#include <vector>  // For std::vector
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    for (int i = 0; i < t; i++) {
        int p; // Number of elements in the current test case
        cin >> p;

        vector<int> a(p); // Vector to store elements of the current test case
        int sum = 0;

        // Read elements of the current test case in a series
        for (int j = 0; j < p; j++) {
            cin >> a[j];
            if (a[j] == 1) {
                sum += 1;
            }
        }

        cout << sum << " ";
        if ((sum % 2) != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

    return 0;
}