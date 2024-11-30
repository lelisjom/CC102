#include <iostream>

using namespace std;

int main () {
	int rows  = 8;
	int column = 4;
	
	for (int m= 0; m < rows; m++) {
	
		if (m % 2 == 0) {
			cout << " ";
		}
	
		for (int a = 0; a < column; a++) {
			cout <<" # * ";
		}
	
	cout << endl;
}

return 0;

}