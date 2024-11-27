#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	freopen("TONGUOC.INP","r",stdin);
    freopen("TONGUOC.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int sol(ll a, ll b){
	ll sum = 0;
	for (ll i = 1; i <= (int) sqrt(a) + 1; i++){
		if ( a % i == 0){
			if (b % (3*i) == 0){
				cout<<i<<" "<<3*i<<endl;
				sum += i;	
			}
			if ( b % ( 3 *(a / i)) == 0 && i != (a / i)){
				cout<<b<<" "<<a<<" "<<i<<endl;
				sum+= (a/i);
			} 
			
		}
	}
	return sum;
}

int main() {
	IO();
    ll a,b;
    cin>>a>>b;
    cout<<sol(a,b);
    return 0;
}
