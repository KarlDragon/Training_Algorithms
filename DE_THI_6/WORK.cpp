#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(a,b) for(a;a<b;++a)

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("WORK.INP","r",stdin);
	freopen("WORK.OUT","w",stdout);
}
void sol(ll n, vector<int> arr1,vector<int> arr2){
	vector <int> dp(n);
	dp[0] = arr1[0];
	dp[1] = min(dp[0] + arr1[1], arr2[0]);
	int i = 2;
	FOR(i,n){
		dp[i] = min(dp[i-1] + arr1[i], dp[i-2] + arr2[i-1]);
	}
	cout<<dp[n-1];
}
int main(){
	IO();
	ll n; cin>>n;
	vector <int> arr1(n);
	vector <int> arr2(n-1);
	int i = 0;
	FOR(i,n){
		cin>>arr1[i];
	}
	i = 0;
	FOR(i,n-1){
		cin>>arr2[i];
	}
	sol(n,arr1,arr2);
	return 0;
	
}
