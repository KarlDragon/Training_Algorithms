#include <bits/stdc++.h>
using namespace std;
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("HOAN_HAO.INP","r",stdin);
	freopen("HOAN_HAO.OUT","w",stdout);
}
int main(){
	IO();
	int n; cin>>n; 
	long long sum = 0;
	if (n < 6) cout<<0;
	else{
		int check; 
		for (int i = 6; i < n; ++i){
			check = 1;
			for (int j = 2; j*j <= i; ++j){
				if (i % j == 0){
					check += j;
					if (j != i/j) check += i / j;
					if (check > i) break;
				}
			}
			if (check == i) sum+=i;
		}
	}
	cout<<sum;
	return 0;
}
