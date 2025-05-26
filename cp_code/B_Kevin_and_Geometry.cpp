#include <bits/stdc++.h>
using namespace std;
#define int long long
const int lowest = -1e6 ;
const int highest= 1e6 ;

void solve(){
int n;
cin>>n;
map<double,double> mp;

for(int i=0;i<n;i++){
double x;
cin>>x;
mp[x]++;
}
set<double> st_pair;
set<double>single;
for(auto it:mp){
    if(it.second >=4){cout<<it.first<<" "<<it.first<<" "<<it.first<<" "<<it.first<<'\n';return;}
    if(it.second==3){
    st_pair.insert(it.first);
    single.insert(it.first);

    }

    if(it.second==2){
    single.insert(it.first);
    }
    if(it.second==1){
    single.insert(it.first);

    }
if(st_pair.size()>=2){
    auto it_k=st_pair.begin();
    auto it_k2=it_k;
    it_k2++;
    cout<<(*it_k)<<" "<<(*it_k)<<" "<<(*it_k2)<<" "<<(*it_k2)<<'\n';return;
}
    
}
for (auto it2 =st_pair.begin();it2!=st_pair.end();it2++) {
    for (auto it3 = single.begin(); it3 != single.end(); ++it3) {
        double f_no = *it3;           // first number in pair
        auto itt = it3;
        ++itt;  // Move to the next element

        // Check if next element exists (it3 is not the last element)
        if (itt != single.end()) {
            double s_no = *itt;  // second number in pair

            // Corrected comparison and cout statement
            if (((s_no - f_no) / 2.0) < (*it2)) {
                cout << (*it2) << " " << (*it2) << " " << f_no << " " << s_no << "\n";
                return;  // exit the function after printing the result
            }
        }
    }
}
cout<<-1<<'\n';return;

} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//precompute()
int t;
cin>>t;
while (t--){
solve();
}
    return 0;
}