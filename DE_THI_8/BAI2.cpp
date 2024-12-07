#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
}

int main(){
	IO();
	ll n,k,b, sum_arr=0;
	vector <int> arr(n);
	cin>>n>>k>>b;
	for(int i = 0; i<n; ++i){
		cin>>arr[i];
	}
	
	ll sum = 0,count = 0;
	int start = b % n - 1;

	if (start == -1){
		start = n - 1;
	}
	while (count < k){
		if (start == n){
			start = 0;		
		}
		sum += arr[start];
		count++;
		start++;
	}
	cout<<sum;
	
	return 0;
}
