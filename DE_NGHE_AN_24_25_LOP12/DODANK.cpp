#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;a++);
void IO(){
	freopen("DODANK.INP","r",stdin);
    freopen("DODANK.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main() {
	IO();

    ll n,k,i,j,ans=0;
    cin>>n>>k;
	vector<ll> arr(n);
    for (i=0;i<n;i++){
    	cin>>arr[i];
    	ans+=arr[i];
//    	cout<<arr[i]<<"\n";
	}
	

	cout<<ans;
    return 0;
}
