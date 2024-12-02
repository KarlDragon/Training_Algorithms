#include <bits/stdc++.h> 
using namespace std;
#define ll long long

void IO(){
	freopen("BAI1.INP","r",stdin);
	freopen("BAI1.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int sol(ll n, vector <ll> arr){
	sort(arr.begin(),arr.end());
	if (arr[0] != arr[1]){
		return arr[0];
	}

	ll maxValue = arr[n-1] + 1;
	for (int i = 1; i < n - 1; i++){
		if ( arr[i] < maxValue && arr[i] != arr[i-1] && arr[i] != arr[i+1]){
			return arr[i];
		}
	}
	if (arr[n - 1] < maxValue && arr[n - 1] != arr[n - 2]){
		return arr[n-1];
	}
	return -1;
}
int main(){
	IO();
	ll n;
	cin>>n;
	vector <ll> arr(n);
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<sol(n,arr);
	return 0;
}
