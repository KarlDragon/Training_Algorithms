#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a,b) for(a;a<b;++a)
const int MOD = 1e9 + 7;

void IO(){
    freopen("CAU5.INP","r",stdin);
    freopen("CAU5.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
}

void sol(ll n, ll k, vector<int> arr) {
    vector<vector<int>> dp(n + 1, vector<int>(k, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < k; ++j) {
            dp[i][(j + arr[i - 1]) % k] = (dp[i][(j + arr[i - 1]) % k] + dp[i - 1][j]) % MOD;
            dp[i][((j - arr[i - 1]) % k + k) % k] = (dp[i][((j - arr[i - 1]) % k + k) % k] + dp[i - 1][j]) % MOD;
        }
    }
    cout << dp[n][0] << endl;
}

int main() {
    IO();

    ll n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int i = 0;
    FOR(i,n){
        cin >> arr[i];
    }
    sol(n, k, arr);
    return 0;
}

