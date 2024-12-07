#include <bits/stdc++.h>
using namespace std;
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("PRIME2.INP","r",stdin);
	freopen("PRIME2.OUT","w",stdout);
}
int main(){
	IO();
	int n,ans = 0; 
	cin>>n; 
	vector <bool> isPrime(n+1, true);
	for (int i = 2; i*i<=n ; ++i){
		for (int j = i*i; j <= n; j+=i){
			if (isPrime[j]) isPrime[j] = false;
		}
	}
	for (int i = 2; i<=n / 2; ++i){
		if (isPrime[i] && isPrime[n-i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
