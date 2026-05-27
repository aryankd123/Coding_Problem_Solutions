#include <bits/stdc++.h>
using namespace std;
#define int long long
//#define double long double
const int lowest = -1e6 ;
const int highest= 1e6 ;
bool find_multiple_inter(vector<pair<double, double>>& segments) {
    double start_intersect = segments[0].first;
    double end_intersect = segments[0].second;

    for (int i = 1; i < segments.size(); i++) {

        start_intersect = max(start_intersect, segments[i].first);
        end_intersect = min(end_intersect, segments[i].second);


        if (start_intersect > end_intersect) {
            return 0;
        }
    }
    return 1;
}

bool can_meet(vector<int>pos,vector<int>speed,double t,int n){
    vector<pair<double,double>> v;
    for(int i=0;i<n;i++){
        v.push_back({pos[i]-t*speed[i],pos[i]+t*speed[i]});
    }
    return find_multiple_inter(v);
}


double bin_search(vector<int>pos,vector<int>speed,int n){
double l=-1;
double r=2e9+10;
for(int i=0;i<100;i++){
    double m=(l+r)/2;
    if(can_meet(pos,speed,m,n)) r=m;
    else l=m;

}
return r;
}
void solve(){
int n;
cin>>n;

vector<int> pos;
vector<int> speed;
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
pos.push_back(x);
speed.push_back(y);
}
double ans=bin_search(pos,speed,n);
cout << fixed << setprecision(8) << ans << endl;



} 
signed main()
{
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

solve();

    return 0;
}