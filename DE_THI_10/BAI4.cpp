#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("BAI4.INP","r",stdin);
	freopen("BAI4.OUT","w",stdout);
}
int main(){
	IO();
	int n;cin>>n;
	vector<int>arr(n);
	for (int i=0;i<n;++i){
		cin>>arr[i];
	}
	int ans = 0;
	for (int i=0;i<n-1;++i){
		for (int j=i+1;j<n;++j){
			if ((arr[i] + arr[j]) % 3 == 0) ans++;
		}
	}
	cout<<ans;
	return 0;
}
