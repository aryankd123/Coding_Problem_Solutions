#include <bits/stdc++.h>
using namespace std;
#define int long long 

struct TrieNode{
TrieNode* children[26];
bool is_end;
int maxi;
string flag;
int occurence;
TrieNode(){
occurence=0;
maxi=0;
for(int i=0;i<26;i++)children[i]=nullptr;

maxi=INT_MIN;
is_end=0;
}

};



class Trie{

private :
TrieNode* root;

public:
Trie (){
 root = new TrieNode();
}


void insert(string s){
TrieNode* curr=root;
for(char c:s){
    int idx = c-'a';
    if(curr->children[idx]==nullptr){
        curr->children[idx]=new TrieNode();
    }
    curr=curr->children[idx];
}
curr->is_end=1;
curr->occurence++;
int baba= curr->occurence;

TrieNode* curr2=root;
for(char c:s){
    int idx = c-'a';
    
    curr2=curr2->children[idx];
    if(baba>curr2->maxi){curr2->flag=s; curr2->maxi=max(curr2->maxi,baba);}
    else if(baba==curr2->maxi){curr2->flag= min(curr2->flag,s);}

}
}

pair <string,int> finder(string s){
TrieNode* curr=root;
for(char c:s){
    // int idx = c-'a';
    int idx = c-'a';
    if(curr->children[idx]==nullptr){
        return {"",-1};
    }
    curr=curr->children[idx];
 
}
return {curr->flag,curr->maxi};
}

};



void solve() {
    int n;
    cin>>n;
    Trie tree;
    while(n--){
        string s;
        cin>>s;
        tree.insert(s);
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        pair<string ,int> pp;
        pp=tree.finder(s);
        if(pp.second==-1)cout<<-1<<"\n";
        else cout<<pp.first<<" "<<pp.second<<"\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // int t;
    // cin >> t;
    // while(t--) {
        solve();
    // }
    
    return 0;
}