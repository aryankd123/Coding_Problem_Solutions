#include <bits/stdc++.h>
using namespace std;

struct TrieNode{
TrieNode* links[2];
int occur;

TrieNode(){
    occur=0;
    for(int i=0;i<2;i++){
        links[i]=nullptr;
                }
            }
    
    bool exists(int bit){
        return links[bit]!=nullptr;

    }
    bool has_bits(int bit){
        return (links[bit]!=nullptr && links[bit]->occur>0);
    }

    TrieNode* get(int bit){
        return links[bit];
     }

     void create(int bit,TrieNode* node){
        links[bit]=node;

    }

    //  void create_node(int bit,TrieNode* node){
    //     return 
    //  }







};

class bit_trie{
private: TrieNode* root;

public: 
    bit_trie(){
    root=new TrieNode();
    }
void insert(int n){
    TrieNode* curr= root;

    for(int i=31;i>=0;i--){
        int bit = ((n>>i)& 1);
        if(!curr->exists(bit)){
           curr->create(bit, new TrieNode());
        }
        curr=curr->get(bit);
        curr->occur++;
    }
    


}

int get_max_xor(int n){
TrieNode* curr=root;

int ans=0;
for(int i=31;i>=0;i--){
int bit= ((n>>i)& 1);
int diff_bit=1-bit;

if(curr->has_bits(diff_bit)){
    ans=ans|(1<<i);
    curr=curr->get(diff_bit);

}
else {
    curr=curr->get(bit);
}



}



    return ans;
}

};


void solve() {
   int n;
   cin>>n;
   vector<int>prefix_xor;
   bit_trie tree;
   prefix_xor.push_back(0);
   int flag =0;
    tree.insert(0);
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    flag = (flag ^x);
    prefix_xor.push_back(flag);
    tree.insert(flag);
   } 
   int ans=0 ;


   for(int i=1;i<=n;i++){
        ans=max(ans,tree.get_max_xor(prefix_xor[i]));
    
   }
   cout<<ans<<"\n";




}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}