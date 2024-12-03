#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define FOR(a,b) for(a;a<b;++a)

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("GHH.INP","r",stdin);
	freopen("GHH.OUT","w",stdout);
}

bool check(ll num){
	ll i = 1, sum = 0;
	for(i; i * i <= num; ++i){
		if (num % i == 0){
			sum += i;
			if( i != ( num / i)){
				sum += (num / i);
			}	
		}
	}
	
	if ( 2*num <= sum){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	IO();
	ll n,num; cin>>n;
	vector <int> ans_arr;
	int i = 0, ans_size = 0;
	FOR(i,n){
		cin>>num;
		if(check(num)){
			ans_arr.push_back(num);
			ans_size++;
		}
	}
	cout<<ans_size<<"\n";
	i = 0;
	FOR(i,ans_size){
		cout<<ans_arr[i]<<"\n";
	}
	return 0;
	
}
