#include <bits/stdc++.h>
using namespace std;
void IO(){
	freopen("BIEUTHUCNT.INP","r",stdin);
    freopen("BIEUTHUCNT.OUT","w",stdout);
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

int sol_1(int n, vector<bool> prime_arr){
	int count = 0;
	
	//Brute force
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (prime_arr[(i + 2 * j)]) {
//                cout << i << " " << j << endl;
                count++;
            }
        }
    }
    cout<<count;
}
int sol_2(int n, vector<bool> prime_arr){
	int count = 0;
	
	    for (int y = 1; y <= n; y++) {
        // We want to check x + 2y, so we compute p = x + 2y and x = p - 2y
        // p = 2*y + 1 or p = 2*y + x with x = 1 and keep x++ until the loop is end
        for (int p = 2 * y + 1; p <= 3 * n; p++) {
            if (prime_arr[p]) {
                int x = p - 2 * y;
                if (x >= 1 && x <= n) {
                    count++;
                }
            }
        }
    }
    cout<<count;
}
int sol_3(int n, vector<bool> prime_arr){
	int count = 0;
	
	     for (int p = 2; p <= 3 * n; p++) {
        if (prime_arr[p]) {
            // For each prime, we find all possible (x, y) such that p = x + 2y
            for (int y = 1; y <= n; y++) {
                int x = p - 2 * y;
                if (x >= 1 && x <= n) {
                    count++;
                }
            }
        }
    }
}

int main() {
	IO();
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
    int n;
    vector<bool> prime_arr;
    cin >> n;

	prime_arr = is_prime(3*n);
    sol_3(n,prime_arr);

    return 0;
}
