#include <iostream>
#include <fstream>
#include <vector> 
using namespace std;

int main() {
    ifstream INP_file("BAI2.INP.txt");
	ofstream OUT_file("BAI2.OUT");
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    long n,k;
    long count;
    long max_count=0;
	vector <long> arr(n);
    INP_file >> n >> k;
    for ( int i = 0 ; i < n ; i++){
    	long item;
    	INP_file >> item ;
    	arr.push_back(item);
	}
	
	for ( int i = 0 ; i < n ; i++){
		count = 0;
		for ( int j = i ; j < n ; j++){
			if (arr[j]%k==0){
				count++;
				if (count > max_count ){
					max_count = count;
				}
			}
			else{
				break;
			}
		}
	}
	
	
	OUT_file<<max_count;
	
	INP_file.close();
	OUT_file.close();
    
    return 0;
}

