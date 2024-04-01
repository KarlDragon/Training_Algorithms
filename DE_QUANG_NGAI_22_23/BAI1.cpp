#include <bits/stdc++.h> 
using namespace std;

bool isTheSame(string string1, string string2){
	for (int i=0; i<string1.size(); i++){
		if (string1[i]!=string2[i]){
			return false;
		}
	}
	return true;
}
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	ifstream inp_file("BAI1.INP");
	ofstream out_file("BAI1.OUT");
	
	string first_string, second_string;
	inp_file>>first_string>>second_string;
	
	if (isTheSame(first_string,second_string) ){
		out_file<<"Yes";
	}
	else{
		out_file<<"No";
	}
	
	inp_file.close();
	out_file.close();
	return 0;
}
