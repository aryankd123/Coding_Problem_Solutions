#include <bits/stdc++.h>
using namespace std;
// question on comparator function
// note-multimap sorts on the basis of the first element only and not on the basis of the second element
// so we have comparator function to use the custom sorting behaviour of the sort function
#define int long long
bool cmp(pair<int,string> p1, pair<int,string> p2){
    if(p1.first<p2.first)return true;
    else if(p1.first>p2.first)return false;
    else if(p1.first ==p2.first){
    if(p1.second<p2.second) return false;
    else return true;
}
}

void solve() {
    int n;
    cin >> n;
    vector<pair<int, string>> v;

    while (n--) {
        int x;
        string s;
        cin >> s >> x;
        v.push_back({x, s});
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<it->second<<" "<<it->first<<endl;
    }
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}