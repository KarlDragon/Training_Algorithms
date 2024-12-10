#include <bits/stdc++.h>
using namespace std;

void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("TIHON.INP","r",stdin);
	freopen("TIHON.OUT","w",stdout);
}
int main(){
	IO();
	int n,num,sum,ans = 0;
	cin>>n;
	for (int i = 0; i<n; ++i){
		cin>>num;
		sum = 1;
		for (int j = 2; j * j <=num; ++j){
			if (num % j == 0){
				sum += j;
				if ( j != num/j) sum+=num/j;
			}
			if (sum > num){
				ans++;
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}
