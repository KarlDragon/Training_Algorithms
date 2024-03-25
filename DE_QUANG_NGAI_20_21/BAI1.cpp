#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    ifstream INP_file("BAI1.INP");
	ofstream OUT_file("BAI1.OUT");
	
    int x, y, z, k, m, n;

    INP_file >> x >> y >> z >> k >> m >> n;
	
	long LowerThanOneMonth_amounts = k;
	long BetweenOneAndTwoMonths_amounts = m - k;
	long MoreThanTwoMonths_amounts = n - m;
	
	long long cost = LowerThanOneMonth_amounts*x + BetweenOneAndTwoMonths_amounts*y + MoreThanTwoMonths_amounts*z;
	
	OUT_file<<cost;
	
	INP_file.close();
	OUT_file.close();
    
    return 0;
}

