#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int compare(int num1, int num2){
	return (num1>num2)?num1:num2;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI2.INP");
	ofstream OUT_file("BAI2.OUT");

	string input_string;
	
	INP_file>>input_string;
	int longest_baby_string = 0;
	int count = 1;
	
	for (int i=1; i<input_string.size(); i++){
		if (input_string[i] == input_string[i-1]){
			count++;
			longest_baby_string = compare(longest_baby_string,count);
		}
		else{
			longest_baby_string = compare(longest_baby_string,count);
			count = 1;
		}
	}
	
	OUT_file<<longest_baby_string;
	
	 
	INP_file.close();
	OUT_file.close();
    
    return 0;
}

