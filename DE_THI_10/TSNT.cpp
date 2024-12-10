#include <bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("TSNT.INP", "r", stdin);
    freopen("TSNT.OUT", "w", stdout);
    ll n,count = 0;
    cin >> n;
    if (n % 2 == 0) {
        count++;
        while (n % 2 == 0) n /= 2;
    }
    
    for (ll i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0) n /= i;
        }
    }
   
    if (n > 1) {
        count++;
    }

    cout<<count;
    return 0;
}
