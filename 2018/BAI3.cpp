#include <iostream>
#include <fstream>
using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI3.INP.txt");
	ofstream OUT_file("BAI3.OUT");
	
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
