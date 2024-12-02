#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;++a)
void IO(){
	freopen("SphenicNum.INP","r",stdin);
	freopen("SphenicNum.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
}

vector <bool> prime(ll n){
	vector <bool> isPrime(n);
	for (int i = 2; i <= n; ++i)
        isPrime[i] = true;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

int find_max(ll n, vector<int> arr){
	ll maxNum = 0;
	ll i = 0;
	FOR(i,n){
		if (arr[i] > maxNum){
			maxNum = arr[i];
		}
	}
	return maxNum;
}
void sol(ll n, vector <int> arr){
	vector <bool> primeArr = prime(find_max(n,arr));
	int count, num;
	int i = 0;
	FOR(i,n){
		count = 0;
		num = arr[i];
		for(int j = 2; j*j <= arr[i];++j){
			if (primeArr[j]){
				while(true){
					if (num % j == 0){
						num /= j;
						count++;
						if (count>3){
							break;
						}
					}
					else{
						break;
					}
				}
			}
			if (count>3){
				break;
			}
			
		}
		if (count == 3){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
	}
}
int main(){
	IO();
	ll n; cin>>n;
	vector <int> arr(n);
	int i = 0;
	FOR(i,n){
		cin>>arr[i];
	}
	sol(n,arr);
	return 0;
}
