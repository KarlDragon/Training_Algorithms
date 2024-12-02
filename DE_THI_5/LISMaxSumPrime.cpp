#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;++a)
#define maxn 100000
#define maxi 1000000
void IO(){
	freopen("LISMaxSumPrime.INP","r",stdin);
	freopen("LISMaxSumPrime.OUT","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(NULL); 
}

vector <bool> prime(){
	vector <bool> isPrime(maxi);
	for (int i = 2; i <= maxi; ++i)
        isPrime[i] = true;
    for (int i = 2; i * i <= maxi; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxi; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

void sol(ll n, vector<int> arr, vector <bool> isPrime) {
    int i = 1, count = 1, primeSum = 0, longestArr = 1, sumLongestArrPrime = 0;
    if (isPrime[arr[0]]){
    	primeSum+=arr[0];
	}
	FOR(i,n){
		if (arr[i] > arr[i-1]){
			count++;
			if (isPrime[arr[i]]){
				primeSum += arr[i];
			}
		}
		else{
			if ( count >= longestArr){
				longestArr = count;
				if (primeSum > sumLongestArrPrime){
					sumLongestArrPrime = primeSum;
				}
			}
			count = 1;
			if (isPrime[arr[i]]){
				primeSum = arr[i];
			}
			
		}
	}
	if ( count >= longestArr){
		longestArr = count;
		if (primeSum > sumLongestArrPrime){
			sumLongestArrPrime = primeSum;
		}
	}
	cout<<longestArr<<" "<<sumLongestArrPrime<<endl;
}
int main(){
	IO();
	vector <int> arr(maxn);
	vector <bool> isPrime = prime();
	ll t; cin>>t;
	int i = 0, j;
	
	FOR(i,t){
		ll n; cin>>n;
		j = 0;
		FOR(j,n){
			cin>>arr[j];
		}
		sol(n,arr,isPrime);	
	}
	return 0;
}
