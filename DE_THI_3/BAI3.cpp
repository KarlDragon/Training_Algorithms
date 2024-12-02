#include <bits/stdc++.h> 
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;++a)
void IO(){
	freopen("BAI3.INP","r",stdin);
//	freopen("BAI3.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL);
}

int check(ll k, ll n, vector <int> arr){
    ll time = 1,res = 0, cur = 0, i = 0;
    FOR(i,n){
        if (arr[i] >= time){
            res += 1;
            cur += 1;
		}
        if (cur == k){
            time += 1;
            cur = 0;
    	}
	}
    return n - res;
}
void sol(ll n, ll k, vector <int> arr){
	ll i,j,count,ans1 = 0, ans2 = 0;
	sort(arr.begin(),arr.end());

	cout<<check(k,n,arr)<<endl;
	
	ll l = 0,r = n + 1,w;
    ll ans = 1e9 + 7;
    ll res = 0;

    while (r - l > 1){
        k = (l + r) / 2;
        w = check(k, n, arr);
        if (w <= ans){
            ans = w;
            res = k;
            r = k;
    	}
        else{
            l = k;
        }
	}
    cout<<res;
}

int main(){
	IO();
	ll n,k; cin>>n>>k;
	vector <int> arr(n);
	for (ll i = 0; i < n; i++){
		cin>>arr[i];
	}
	sol(n,k,arr);
	return 0;
}
