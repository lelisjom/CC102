#include <iostream>

using namespace std;

int main () {

	int temp;
	cout << "Enter temperature: ";
	cin >> temp;
	
	if (temp < 32)
		cout << "Bring a heavy jacket." << endl;
	if (temp >= 32 && temp <= 50)
		cout << "Bring a light jacket." << endl;
	if (temp > 50)
		cout << "No jacket needed." << endl;
	
	
return 0;

}