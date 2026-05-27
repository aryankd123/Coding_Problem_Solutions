#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
 
        string bin_str;
        cin >> bin_str;
        string sub_str;
        pair<int, int> first_sub, second_sub;
        for(int i = 0; i < (int)bin_str.length(); i++){
            if(bin_str[i]=='1'){
                sub_str = bin_str.substr(i);
                first_sub = {i, (int)bin_str.length() - 1};
                break;
            }
        }
        
        if(sub_str.empty()){
            cout << "1 1 1 1\n";
        }
        else{
            int max_len = 0, start_pos = 0;
            for(int i = 0; i < (int)sub_str.length(); i++){
                if(sub_str[i] == '0'){
                    start_pos = i;
                    max_len = (int)sub_str.length() - i;
                    break;
                }
            }
             if(max_len == 0){
                for(int i = 0; i < (int)bin_str.length(); i++){
                    if(bin_str[i] == '0'){
                        second_sub = {i, i};break;
                    }
                }
            }
            else{
                second_sub = {0, 0};
                string max_sub = sub_str;
                
            for(int i = 0; i + max_len <= (int)bin_str.length(); i++){
            string cur_sub = sub_str;
            for(int j = i; j < i + max_len; j++){
            cur_sub[j-i+start_pos] =((cur_sub[j -i+start_pos] - '0') ^ (bin_str[j] - '0')) + '0';
                }     
            if(cur_sub > max_sub){
                    max_sub = cur_sub;
                    second_sub = {i, i + max_len - 1};
                    }
                }
            }
            
            cout <<first_sub.first+1 << ' ' << first_sub.second + 1 <<' '<< second_sub.first + 1 <<' '<<second_sub.second+1<< '\n';
        }
    }


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();}
    
    return 0;
}