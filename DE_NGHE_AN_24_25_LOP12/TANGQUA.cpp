#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long
void IO(){
	freopen("TANGQUA.INP","r",stdin);
    freopen("TANGQUA.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


int main() {
	IO();
    unordered_map< int, bool > unorderedMap;
    ll n,max,i = 0,count;
    cin >> n;
    vector<ll> arr(n),ans(n);
	for (i=0;i<n;i++){
		cin>>arr[i];
		if (arr[i]>max){
			max = arr[i];
		}
	}
	for (i=0;i<n;i++){
		unorderedMap[arr[i]] = true;
		count = 1;
		while (true){
			if (unorderedMap[count]){
				count++;
			}
			else{
				cout<<count<<" ";
				break;
			}
		}
	}
	
    return 0;
}
