#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	freopen("BACNAM.INP","r",stdin);
    freopen("BACNAM.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void sol(ll n,vector <int> arr){
	ll x = -1, y = 0,i,j,odd = 0,even = 0;
	bool isOdd = false, isEven = false;
	while ( x + y < n + n - 1 ){
		for ( i = 0; i<n; i++){
			if (arr[i] == x + 2){
				x += 2;
				isOdd = true;
			}
			if (arr[i] == y + 2){
				y += 2;
				isEven = true;
			}

		}
//		cout<<x<<" "<<y<<endl;
		if (isOdd){
			odd++;
		}
		if (isEven){
			even++;
		}
		isOdd = false;
		isEven = false;
	}
	cout<<odd<<" "<<even;
}
int main() {
	IO();
    ll n;
    cin>>n;
    vector <int> arr(n);
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
    sol(n,arr);
    return 0;
}
