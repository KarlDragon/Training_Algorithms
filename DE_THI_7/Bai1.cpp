#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("Bai1.inp","r",stdin);
	freopen("Bai1.out","w",stdout);

}

void sol(ll n, vector<vector<int> > arr){
	int ans = 0,i,j;
	vector<int> row(n,0), column(n,0);
	for (i = 0; i<n; ++i){
		for (j = 0; j<n; ++j){
			row[i] += arr[i][j];
		}	
	}
	
	for (j = 0; j<n; ++j){
		for (i = 0; i<n; ++i){
			column[j] += arr[i][j];
		}	
	}
	
	for (i = 0; i<n; ++i){
		for (j = 0; j<n; ++j){
			if (row[i] == column[j]){
				ans++;
			};
		}	
	}
	cout<<ans;
}

int main(){
	IO();
	ll n; cin>>n;
	vector<vector<int> > arr(n,vector<int>(n));
	for (int i = 0; i<n ; ++i){
		for( int j = 0; j<n; ++j){
			cin>>arr[i][j];
		}
	}
	sol(n,arr);
	return 0;
}
