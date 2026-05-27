
typedef long long ll;

class Solution {
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        ll ans=INT_MIN;
        for(int i=0;i<k;i++){
            ll l=0;
            ll r=1e9;
            while(r>=l){
                ll m=(l+r)/2;
                ll sum=0;
                for(int j=0;j<n;j++){
                    ll req=composition[i][j]*m;
                    if(req>stock[j])sum+=(cost[j]*(req-stock[j]));

                }
               if(sum<=budget) ans=max(ans,m);
                if(sum>budget)r=m-1;
                else l=m+1;
            }
        }
        return (int)ans;
    }
};