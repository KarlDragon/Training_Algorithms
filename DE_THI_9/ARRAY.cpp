#include <bits/stdc++.h>
using namespace std;
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("ARRAY.INP","r",stdin);
	freopen("ARRAY.OUT","w",stdout);
}
int main(){
	IO();
	int n; cin>>n; 
	vector<int>arr(n);
	for (int i = 0; i<n;++i){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	for (int i = n - 1; i>=0; --i){
		cout<<arr[i]<<" ";
	}
	return 0;
}
