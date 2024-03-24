#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

bool is_perfect_squares(int number){
	double sqrt_number = sqrt(number);
	if (ceil(sqrt_number) == floor(sqrt_number)){
		return true;
	}
	return false;
}
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	ifstream INP_file("BAI1.INP");
	ofstream OUT_file("BAI1.OUT");
	
	int n;
	INP_file>>n;
	int number;
	
	for (int i=0;i<n;i++){
		INP_file>>number;
		if (i!=n-1){
			if (is_perfect_squares(number) ){
				OUT_file<<number<<" ";
			}
		}
		else{
			if (is_perfect_squares(number) ){
				OUT_file<<number;
			}
		}
	}
	
	INP_file.close();
	OUT_file.close();
	return 0;
}
