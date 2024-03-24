#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;

int distance(int x1, int y1, int x2, int y2) {
    return sqrt((x2-x1)*(x2-x1) + ((y2-y1)*(y2-y1)));
}

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI3.INP");
	ofstream OUT_file("BAI3.OUT");
	
	int n, r;
	int result,count;
	INP_file>>n>>r;
	
	vector<vector<int> >arr(n,vector<int>(2));
    for (int i = 0; i < n; i++) {
        INP_file >> arr[i][0]>>arr[i][1];
    }
	
	for (int i=0;i<n;i++){
		count = 0;
		for (int j=0;j<n;j++){
			if (i!=j){
				if (distance(arr[i][0],arr[i][1],arr[j][0],arr[j][1]) <= r){
					count += 1;
					if(count > result){
						result = count;
					}
				}
			}
		}
	}
    
    OUT_file<<result;
	
	INP_file.close();
	OUT_file.close();
	
    return 0;
}
