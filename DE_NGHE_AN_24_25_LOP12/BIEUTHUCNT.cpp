#include <bits/stdc++.h>
using namespace std;

void IO(){
	freopen("BIEUTHUCNT.INP","r",stdin);
    freopen("BIEUTHUCNT.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

vector<bool> is_prime(int n) {
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false; 

    for (int i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    return prime;
}

int findPair(int n, vector<bool> prime_arr){
	int count = 0,y;
	
	for (int p=3; p<=3*n; p+=2){
		if (prime_arr[p]){
			for (int x = 1; x<=n; x+=2){
				y = p - x;
				if (y >= 1 && y/2 <= n){
					count++;
				}
			}
		}
	}
	cout<<count;
}
int main() {
	IO();
	
    int n;
    vector<bool> prime_arr;
    cin >> n;

	prime_arr = is_prime(3*n);
    findPair(n,prime_arr);

    return 0;
}
