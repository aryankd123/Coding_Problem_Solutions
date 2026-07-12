#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
	int n;
	cin>>n;
	string a,b;
	cin>>a>>b;
	string blocks_a ="";
	for(int i=0;i<n;i++){
	    if(i==0 || a[i]!=a[i-1]){
	        blocks_a+=a[i];
	        
	    }
	    
	}
	string blocks_b="";
	
	for(int i=0;i<n;i++){
	    if(i==0 || b[i]!=b[i-1]){
	        blocks_b+=b[i];
	    }
	}
	int j=0;
	for(int i=0;i<blocks_a.length();i++){
	    if(j<blocks_b.length()&& blocks_a[i]==blocks_b[j]){
	        j++;
	    }
	}
	if(j==blocks_b.length())cout<<"Yes\n";
	else cout<<"No\n";
    }
	return 0;

}
