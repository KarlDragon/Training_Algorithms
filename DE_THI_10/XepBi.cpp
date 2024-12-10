#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("XepBi.Inp","r",stdin);
	freopen("XepBi.Out","w",stdout);
}
int main(){
	IO();
	int n,m;cin>>n>>m;
	vector<int>arr(n);
	vector<int>color(n);
	for (int i=0;i<n;++i){
		cin>>arr[i];
	}
	
	for (int i=0;i<n;++i){
		cin>>color[i];
	}
	ll w = arr[0];
	int last_color = color[0];
	int ans = 1;
	for (int i = 1; i<n; ++i){
		if (color[i] != last_color || w + arr[i] > m){
			last_color = color[i];
			w = arr[i];
			ans++;
		}
		else{
			w += arr[i];
		}
	}
	cout<<ans;
	return 0;
}
