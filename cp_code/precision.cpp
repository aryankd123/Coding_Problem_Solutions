// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int answer(int a,int b){
        int diff=b-a;
    if (diff>100) {
        int min,max=a%10;
        int ans=a;
        int max_req=-1;
        for(int i=0;i<100;i++){
            int count=0;
            
            int num=a+i;
            while(num>0){
                if(num%10>max) max=num%10;
                if(num%10<min) min=num%10;
                num=num/10;
                int req=max-min;
                if(i==0){
                    max_req==req;
                    
                }
                if(req>max_req){
                    max_req=req;
                    count++;
                }
            }if (count>0)ans=a+i;
            //else ans=a;
        }
   return ans; }
   
   
   
   if (diff<=100) {
        int min,max=a%10;
        int ans=a;
        int max_req=-1;
        for(int i=0;i<=diff;i++){
            int count=0;
            
            int num=a+i;
            while(num>0){
                if(num%10>max) max=num%10;
                if(num%10<min) min=num%10;
                num=num/10;
                int req=max-min;
                if(i==0){
                    max_req==req;
                    
                }
                if(req>max_req){
                    max_req=req;
                    count++;
                }
            }if (count>0)ans=a+i;
            //else ans=a;
        }
   return ans;
   }}
int main() {
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    int req_ans=answer(a,b);
    cout<<req_ans<<endl;
    


}
    return 0;
}