#include <bits/stdc++.h>
using namespace std;

const int MAX_POW = 40;
const long long INF = 1e15;


struct Task {
enum TaskType { RANGE, PRINT_AFTER } type;

 long long l, r, k;

 int val;


Task(long long l_, long long r_, long long k_) : type(RANGE), l(l_), r(r_), k(k_), val(0) {}


Task(int v) : type(PRINT_AFTER), l(0), r(0), k(0), val(v) {}
};


long long half_interval_count(long long length, const vector<long long>& pow2) {
if (length <= 1)
return 1;
if ((length - 1) <= MAX_POW)
return pow2[length - 1];
 else
 return INF;
}

int main(){

 ios::sync_with_stdio(false);
 cin.tie(NULL);


vector<long long> pow2(MAX_POW + 1, 1);
for(int i = 1; i <= MAX_POW; ++i){
 pow2[i] = pow2[i-1] * 2;
}


 long long t;
 cin >> t;


string output;

while(t--){
long long n, k;
cin >> n >> k;

 if(n == 1){
 if(k == 1){
 output += "1 \n";
}
else{
 output += "-1\n";
}
 continue;
 }


long long total_count = half_interval_count(n, pow2);
 if(k > total_count){
output += "-1\n";
 continue;
 }


 vector<Task> stack_tasks;
 stack_tasks.emplace_back(n >= 1 ? Task(1, n, k) : Task(1, n, k));


vector<int> result;

while(!stack_tasks.empty()){
Task current = stack_tasks.back();
 stack_tasks.pop_back();

if(current.type == Task::PRINT_AFTER){

 result.push_back(current.val);
 }
else{

 long long l = current.l;
long long r = current.r;
long long cur_k = current.k;

while(true){
 if(l == r){

result.push_back(static_cast<int>(l));
 break;
 }

 long long length = r - l;
long long half = half_interval_count(length, pow2);

 if(cur_k <= half){

 result.push_back(static_cast<int>(l));
 l += 1;
}
 else{

stack_tasks.emplace_back(static_cast<int>(l));
l += 1;
cur_k -= half;

 continue;
}

 if(l > r){
 break;
}

 if(l == r){
 result.push_back(static_cast<int>(l));
 break;
}
 }
}
}


 string res_str;
 for(auto num : result){
 res_str += to_string(num) + " ";
 }
 res_str += "\n";
 output += res_str;
}
 cout<<output<<endl;
}
