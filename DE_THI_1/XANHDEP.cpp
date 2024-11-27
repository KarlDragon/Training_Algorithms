#include <bits/stdc++.h>
using namespace std;
#define ll long long
void IO(){
	freopen("XANHDEP.INP","r",stdin);
    freopen("XANHDEP.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

bool cpm(ll a, ll b){
	return a>b;
}
int sol(ll n,vector <string> arr){
	ll answer = 1,i,j,count;
	string str;
	for (i=0;i<n;i++){
		count = 1;
		str = arr[i];
		for(j=1;j<str.length();j++){
			if (str[j] != str[j-1]){
				if (cpm(count,answer)){answer = count;}
				count = 1;
			}
			else{
				count++;
			}
		}
		if (cpm(count,answer)){answer = count;}
	}
	return answer;
}

int main() {
	IO();
    ll n;
    vector <string> arr(n);
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
    cout<<sol(n,arr);
    return 0;
}
