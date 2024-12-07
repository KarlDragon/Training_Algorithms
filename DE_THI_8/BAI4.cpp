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
	ll n;cin>>n;
	vector<ll>arr(n);
	arr[0] = 1, arr[1] = 1;
	int index;
	for (int i = 2; i<n; ++i){
		if (arr[i-1] + arr[i-2]	<= n){
			arr[i] += arr[i-1] + arr[i-2];
		}
		else{
			index = i;
			break;
		}
	}
	bool first = false;
	cout<<n<<" = ";
	for (int i = index - 1; i >= 0 ; --i){
		if (n - arr[i] >= 0 ) {
			if (!first){
				cout<<arr[i]<<" ";
				first = true;
			}
			else{
				cout<<"+ "<<arr[i]<<" ";
			}
			n -= arr[i];
			if (n == 0){
				break;
			}
		}

	}
	return 0;
}
