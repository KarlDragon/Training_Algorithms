#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool difference(vector<vector<int> > array_infunc, int row_infunc, int column_infucn){
	
	if (array_infunc[row_infunc][column_infucn] == array_infunc[row_infunc+1][column_infucn]){
		return false;
	}
	
	if (array_infunc[row_infunc][column_infucn] == array_infunc[row_infunc][column_infucn+1]){
		return false;
	}
	
	if (array_infunc[row_infunc][column_infucn] == array_infunc[row_infunc+1][column_infucn+1]){
		return false;
	}
	
	if (array_infunc[row_infunc+1][column_infucn] == array_infunc[row_infunc][column_infucn+1]){
		return false;
	}
	
	if (array_infunc[row_infunc+1][column_infucn] == array_infunc[row_infunc+1][column_infucn+1]){
		return false;
	}
	
	if (array_infunc[row_infunc][column_infucn+1] == array_infunc[row_infunc+1][column_infucn+1]){
		return false;
	}
	
	return true;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI1.INP");
	ofstream OUT_file("BAI1.OUT");

	int row, column;
	INP_file>>row>>column;

	vector<vector<int> > array(row, vector<int>(column));
	
	for (int i=0; i<row; i++){
		for (int j=0; j<column; j++){
			INP_file>>array[i][j];
		}
	}

	int count = 0;
	
	for (int i=0; i<row-1; i++){
		for (int j=0; j<column-1; j++){
			if (difference(array, i, j)){
				count++;
			}
		}
	}
	
	OUT_file<<count;
	
	INP_file.close();
	OUT_file.close();
    
    return 0;
}

