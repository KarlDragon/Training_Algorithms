#include <bits/stdc++.h>
using namespace std;
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("MAX.INP","r",stdin);
	freopen("MAX.OUT","w",stdout);
}
int main(){
	IO();
	int num1,num2,num3,cpm;
	cin>>num1>>num2>>num3;
	cpm = max(num1,num2);
	cout<<max(cpm,num3);
	return 0;
}
