#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void IO(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("Bai2.inp","r",stdin);
	freopen("Bai2.out","w",stdout);

}

int main(){
	IO();
	string num; cin>>num;
	bool is_two = true, is_three = true, is_five = true, is_seven = true;
	for (int i = 0; i<num.length(); ++i){
		if (num[i] == '2' && is_two){
			cout<<2<<" ";
			is_two = false;
		}
		if (num[i] == '3' && is_three){
			cout<<3<<" ";
			is_three = false;
		}
		if (num[i] == '5' && is_five){
			cout<<5<<" ";
			is_five = false;
		}
		if (num[i] == '7' && is_seven){
			cout<<7<<" ";
			is_seven = false;
		}
	}	
	return 0;
}
