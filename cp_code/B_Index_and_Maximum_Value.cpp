#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int  n,m;
        cin>>n>>m;
        long long a[n];
        int max;
        for(int i=0;i<n;i++){cin>>a[i];
        if(i==0)max=a[i];
        else if(a[i]>max)max=a[i];}
        char c;
        int l,r;
        for(int j=0;j<m;j++){
        cin>>c;
        cin>>l>>r;
        if(c=='+'&& (l<=max&& max<=r) ) {++max;cout<<max<<" ";}
        else if(c=='-' && (l<=max && max<=r)){--max;cout<<max<<" ";}
        else cout<<max<<" ";
        }
        cout<<endl;


    }


    return 0;
}
