#include <bits/stdc++.h> 
using namespace std;

struct Result {
	int value;
	vector<int> data;
};

Result clean_and_sort(vector<int> torchs_len_array, int torchs_amount){
	Result result_struct;
	vector<int> new_vector;
	
	sort(torchs_len_array.begin(), torchs_len_array.end());
//	cout<<torchs_len_array.size()<<endl;
	
	int count = 1;
	int result = 0;
	int i = 1;
//	for (int i=0;i<torchs_amount;i++){
//		cout<<torchs_len_array[i]<<"\n";
//	}
	for (i; i<torchs_amount; i++){
		if (torchs_len_array[i] == torchs_len_array[i-1]){
			count++;
//			cout<<torchs_len_array[i-1]<<" "<<count<<endl;
		}
		else{
			if (count >= 4){
				result++;
//				cout<<torchs_len_array[i-1]<<endl;
			}
			else if (count >= 2){
				result_struct.data.push_back(torchs_len_array[i - 1]);
				new_vector.push_back(torchs_len_array[i - 1]);
//				cout<<"YES"<<endl;
//				cout<<torchs_len_array[i-1]<<endl;
			}
			count = 1;
		}
	}
	
	if (count >= 4){
		result++;
//		cout<<torchs_len_array[i-1];
		}
	else if (count >= 2){
		result_struct.data.push_back(torchs_len_array[i - 1]);
		new_vector.push_back(torchs_len_array[i - 1]);
//		cout<<torchs_len_array[i-1];
	}
//	cout<<result_struct.data.size()<<endl;
//	result_struct.data = new_vector;
//	for (int i=0; i<result_struct.data.size(); i++){
//		cout<<result_struct.data[i]<<endl;
//	}
//	
//	for (int i=0; i<new_vector.size(); i++){
//		cout<<new_vector[i]<<endl;
//	}
	
	result_struct.value = result;
	return result_struct;
}

int caculate_combination(vector <int> myNewVector){
		
	int myNewVector_size =  myNewVector.size();
//	cout<<myNewVector_size;
	int k_factorial = 2, n_factorial = 1; 
	int n_minus_k_factorial;
	
	if (myNewVector_size >= 2){
		for (int i=1; i<= myNewVector_size; i++){
			n_factorial *= i;
			if (i == myNewVector_size - 2){
				n_minus_k_factorial = n_factorial;
			}
		}
	}
	
//	cout<<myNewVector_size<<" "<<n_factorial<<" "<<n_minus_k_factorial;
	
	int Combination =  n_factorial / ( k_factorial * n_minus_k_factorial);
	
	return Combination;
}
int main(){
	
//	ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
    
	ifstream inp_file("D:\\C++\\Test_22_23\\BAI2\\test00\\BAI2.INP");
	ofstream out_file("BAI2.OUT");
	
	int torchs_amount;
	
	inp_file>>torchs_amount;
	
	vector<int> torchs_len_array(torchs_amount);
	
	for (int i=0; i<torchs_amount; i++){
		inp_file>>torchs_len_array[i];
	}
//	cout<<torchs_len_array.size()<<endl;

//	for (int i=0; i<torchs_amount; i++){
//		cout<<torchs_len_array[i]<<endl;
//	}
	
	Result myResult = clean_and_sort(torchs_len_array, torchs_amount);
	
	int myCount = myResult.value;

	vector<int> myNewVector = myResult.data;
//	cout<<myNewVector.size()<<endl;
//	cout<<myCount<<endl;
	
	myCount += caculate_combination(myNewVector);
	
	cout<<myCount;
	out_file<<myCount;
	
	inp_file.close();
	out_file.close();
	return 0;
}
