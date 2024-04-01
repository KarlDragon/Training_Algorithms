#include <bits/stdc++.h> 
using namespace std;

vector<int> beautifulLaneAddress(vector<int>housesHeightArray, int housesAmount, int avarageHousesHeight){
	int startPoint = 0, beautifulHousesAmount = 0;
	for (int i=0; i<housesAmount; i++){
		int sumHousesHeight = 0;
		int count = 0;
		for (int j=i; j<housesAmount; j++){
			sumHousesHeight += housesHeightArray[j];
			count++;
			if (sumHousesHeight / count == avarageHousesHeight){
				if (count > beautifulHousesAmount){
					beautifulHousesAmount = count;
					startPoint = i + 1;
				}
			}
		}
	}
	vector<int> result(2);
	
	result[0] = startPoint;
	result[1] = beautifulHousesAmount;
	
	return result;
}
int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
	ifstream inp_file("BAI3.txt");
	ofstream out_file("BAI3.OUT");
	
	int housesAmount, avarageHousesHeight;
	
	inp_file>>housesAmount>>avarageHousesHeight;
	
	vector<int> housesHeightArray(housesAmount);
	
	for (int i=0; i<housesAmount; i++){
		inp_file>>housesHeightArray[i];
	}
	
	vector<int>answer(2); 
	answer = beautifulLaneAddress(housesHeightArray, housesAmount, avarageHousesHeight);
	
	if (answer[0] == 0){
		out_file << 0;
	}
	else{
		out_file << answer[0] << " " << answer[1];
	}
	
	inp_file.close();
	out_file.close();
	return 0;
}
