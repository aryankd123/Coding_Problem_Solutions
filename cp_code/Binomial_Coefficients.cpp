#include <iostream>
using namespace std;
#define int long long
const int MAXN = 1e6;
const int MOD = 1e9 + 7;

int fac[MAXN + 1];
int inv[MAXN + 1];
int bin_multiply(int a,int b,int M){int ans=0;while(b){if(b&1)ans=(ans+a)%M;a=(a+a)%M; b=b>>1;} return ans;}
int  bin_exp_iter(int a,int b,int M){a=a%M;int ans=1;while(b){if(b&1) ans=(bin_multiply(ans,a,M));
a=bin_multiply(a,a,M);b=(b>>1);}return ans;}

int mmi(int a,int M){
int mmi_a=(bin_exp_iter(a,M-2,M));
return mmi_a;}
 
void factorial() {
	fac[0] = 1;
	for (int i=1;i<=MAXN;i++){fac[i]=fac[i-1]*i%MOD; }
}
void inverses() {
    inv[MAXN]=mmi(fac[MAXN],MOD);
	for (int i = MAXN; i >= 1; i--) { inv[i - 1] = inv[i] * i % MOD; }
}
int choose(int n, int r) { return fac[n] * inv[r] % MOD * inv[n - r] % MOD; }
signed main() {
	factorial();
	inverses();
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		cout << choose(a, b) << '\n';
	}
}