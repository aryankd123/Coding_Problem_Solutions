#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> 

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        if(l%2==0)l++;
        if(r%2==0)r--;
int ans;
int odd_c=((r-l)/2)+1;
ans=odd_c/2;
cout<<ans<<endl;
    }


    return 0;
}
