#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;a++)
void IO(){
	freopen("LongWord.INP","r",stdin);
	freopen("LongWord.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
}

void sol(ll n, vector<string> arr) {
    int i = 0; 
	FOR(i,n){
        string word = arr[i];
        if (word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
}
int main(){
	IO();
	ll n; cin>>n;
	int i = 0;
	vector<string> arr(n);
	FOR(i,n){
		cin>>arr[i];
	}
	sol(n,arr);	
	return 0;
}
