#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;++a)
#define maxn 100000
void IO(){
	freopen("Buildings.INP","r",stdin);
	freopen("Buildings.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
}

void sol(ll n, vector <int> arr){
	int i = 1, index = arr[0],count = 1;
	FOR(i,n){
		if (arr[i] >= index){
			count++;
			index = arr[i];
		}
	}
	cout<<count<<endl;
}
int main(){
	IO();
	vector <int> arr(maxn);
	ll t; cin>>t;
	int i = 0, j;
	FOR(i,t){
		ll n; cin>>n;
		j = 0;
		FOR(j,n){
			cin>>arr[j];
		}
		sol(n,arr);	
	}

	
	
	return 0;
}
