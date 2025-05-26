// Online C++ compiler to run C++ program online
#include <iostream>
#include <string.h>
#include<cstdint>
#include <cmath>
// # include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while (t--){
int l,r;
cin>>l>>r;
int L,R;
cin>>L>>R;
if(l<r && r<L && L<R) cout<<1<<endl;
else if(L<R && R<l && l<r)    cout<<1<<endl;
else if (L<l && l<r && r<R)   cout<<r-l+2<<endl;
else if(l<L && L<R && R<r)    cout<<R-L+2<<endl;
else if(l<L&&  L<r && r<<R)   cout<<r-L+2<<endl;
else if(l<r && r==L && L<R )  cout<<2<<endl;
else if(L<R && R==l && l<r)   cout<<2<<endl;
else if (l<L&& L<R && R<r)    cout<<R-L+2<<endl;
else if (L<l && l<r &&(r==R)) cout<<r-l+1<<endl;
else if(l<L && L<R &&(R==r))  cout<<R-L+1<<endl;
else if(L==l && l<R && R<r)   cout<<R-L+1<<endl;
else if(l==L && L<R && R==r)  cout<<R-L<<endl;
else if(l==L&& L<r&& r<R)     cout<<r-l+1<<endl;
else if(L<l&& l<R && R<r)     cout<<R-l+1<<endl;
else if(l<L && L<r && r<R)    cout<<r-L+1<<endl;
else cout<<"baba"<<endl;
}

    
    return 0;
}