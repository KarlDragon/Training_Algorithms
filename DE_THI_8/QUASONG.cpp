#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("QUASONG.INP","r",stdin);
	freopen("QUASONG.OUT","w",stdout);
}

int main(){
	IO();
	int MOD = 1000000007;
	ll n, k, l, r; cin>>n>>k;
	vector <int> d;
	for (int i = 0; i<k;++i){
		cin>>l>>r;
		for (ll j = l; j<=r; ++j){
			d.push_back(j);
		}
	}
	vector <int> dp(n + 1,0);
	dp[1] = 1;
	for (int i = 2; i<=n; ++i){
		for (int j = 0; j<d.size(); ++j){
			if (i - d[j] >= 1){
				dp[i] = (dp[i] + dp[i-d[j]]) % MOD;
			} 
		}
//		cout<<dp[i]<<endl; 
	}
	cout<<dp[n];
	return 0;
}
