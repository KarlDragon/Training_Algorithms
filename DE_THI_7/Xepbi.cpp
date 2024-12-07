#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("Xepbi.inp","r",stdin);
	freopen("Xepbi.out","w",stdout);

}

int main(){
	IO();
	ll n,m,ans,i;
	cin>>n>>m;
	vector<int> arr(n + 1), color(n + 1);
	arr[0] = 0;
    color[0] = 2; 
	for (i = 1; i <= n; ++i){
		cin>>arr[i];
	}
	for (i = 1; i <= n; ++i){
		cin>>color[i];
	}
	
	

	int sum = 0;
    int res = 0;

    for (i = 1; i <= n; ++i) {
        if ((color[i - 1] != color[i]) || (color[i - 1] == color[i] && sum + arr[i] > m)) {
            sum = arr[i];
            res++;
        } else {
            sum += arr[i];
        }
    }

    cout << res;

	return 0;
}
