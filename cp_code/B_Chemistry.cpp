# include <iostream>
//# include<bits/stdc++.h>
using namespace std;

string sort_str(string &str){
    sort(str.begin(),str.end());
    return str;
}


int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;


string sorted=sort_str(s);
s=s+'0';
int arr[s.size()]={0};
for(int i=0;i<s.size()-1;i++){
    int count=1;
    int k=i;

   while(sorted[k]==sorted[k+1]) {k++;count++;}
    i=k;
    arr[i]=count;
   
}
int sum=0;
for(int j=0;j<s.size();j++){
    //cout<<arr[j];
    sum+=arr[j]%2;
}

if(k>=sum-1){cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}

}
return 0;

}