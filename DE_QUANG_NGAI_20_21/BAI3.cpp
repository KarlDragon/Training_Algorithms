#include <iostream>
#include <fstream>
#include <vector> 
#include <algorithm>
using namespace std;

int distance_with_c_equal_3(vector <int> array,int n){
	int max_distance=0;
	int distance_between_first_and_i,distance_between_final_and_i;
	for (int i=1;i<n-1;i++){
		distance_between_first_and_i = array[i]-array[0];
		distance_between_final_and_i = array[n-1]-array[i];
		
		if (distance_between_first_and_i>distance_between_final_and_i){
			if (distance_between_final_and_i>max_distance){
				max_distance = distance_between_final_and_i;
			}
		}
		else{
			if (distance_between_first_and_i>max_distance){
				max_distance = distance_between_first_and_i;
			}
		}
	}
	return max_distance;
}

int distance_with_c_more_than_3(vector <int> array, int n){
	return 0;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI3.INP.txt");
	ofstream OUT_file("BAI3.OUT.txt");

	int n,c;
	
	INP_file>>n>>c;
	
	vector <int> arr(n);
	
	for (int i=0;i<n;i++){
		INP_file>>arr[i];
	}
	
	sort(arr.begin(),arr.end());
	
	if (c==2){
		OUT_file<<arr[n-1]-arr[0];
	}
	else if (c==3){
		OUT_file<<distance_with_c_equal_3(arr,n);
	}
	else{
		OUT_file<<distance_with_c_more_than_3(arr,n);
	}
	
	INP_file.close();
	OUT_file.close();
    
    return 0;
}

