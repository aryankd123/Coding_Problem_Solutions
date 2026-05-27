#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    int flag=0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

  
    if (sum % n != 0) {
        cout << "NO\n";
        return;
    }

    long long target = sum / n;
    long long surplus = 0, deficit = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > target) {
            surplus += a[i] - target;
        } else {
            deficit += target - a[i];
        }

        if(i!=0&& i!=n-1){
            if(a[i-1]!=target && a[i+1]==target)flag++;
            else if(a[i-1]==target &&a[i+1]!=target)flag++;
        }


    }




    if (surplus != deficit || flag>0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}