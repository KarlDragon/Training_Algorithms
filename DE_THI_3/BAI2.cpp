#include <bits/stdc++.h> 
using namespace std;
#define ll long long

void IO(){
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}

int sol(ll n, vector <ll> arr){
	sort(arr.begin(),arr.end());

	ll answer = 1, count = 1;
	for (int i = 1; i < n; i++){
		if ( arr[i] == arr[i-1]){
			count++;
		}
		else{
			answer = max(answer,count);
			count = 1;
		}
		answer = max(answer,count);
	}
	

	return answer;
}
int main(){
	IO();
	ll n;
	cin>>n;
	vector <ll> arr(n);
	for (ll i = 0; i < n; i++){
		cin>>arr[i];
	}
	cout<<sol(n,arr);
	return 0;
}
