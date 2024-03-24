#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
string to_string(const T& value) {
    ostringstream os;
    os << value;
    return os.str();
}

string from_1_to_number(int number){
	string From_1_to_number_infunc;
	for (int i=1;i<=number;i++){
		From_1_to_number_infunc += to_string(i);
	}
	return From_1_to_number_infunc;
}

string remove_odd_even_place(string From_1_to_number_infunc){
	bool flag = true;
	string new_string;
	while (From_1_to_number_infunc.size()>1){
		new_string = "";
		if (flag){
			for (int i=0;i<From_1_to_number_infunc.size();i+=2){
				new_string += From_1_to_number_infunc[i];
			}
		}
		else{
			for (int i=1;i<From_1_to_number_infunc.size();i+=2){
				new_string += From_1_to_number_infunc[i];
			}
		}
		flag = !flag;
		From_1_to_number_infunc = new_string;
	}
	return From_1_to_number_infunc;
}

int count_answer(string From_1_to_number_infunc,string ans){
	int count=0;
	for (int i=0;i<From_1_to_number_infunc.size();i++){
		if (From_1_to_number_infunc[i] == ans[0]){
			count++;
		}
	}
	return count;
}

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI2.INP");
	ofstream OUT_file("BAI2.OUT");
	
	int number;
	INP_file>>number;
	
	string From_1_to_number = from_1_to_number(number);
	string answer = remove_odd_even_place(From_1_to_number);
	int count = count_answer(From_1_to_number,answer);
	
	OUT_file<<answer<<" "<<count;
	
	INP_file.close();
	OUT_file.close();
	
    return 0;
}
