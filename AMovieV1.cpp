#include <iostream>

using namespace std;

int main () 
{
	int age;
	double money;
	bool parent;
	string toPrintShow, toPrintMoney;
	cout << "Enter age: ";
	cin >> age;
	if(age<13) {
		cout << "With Parent? ";
		cin >> parent;
		if (parent)
			toPrintShow = "PG & G show.";
		else
			toPrintShow = "G show."; }
	else if (age<16) {
		cout << "With Parent? ";
		cin >> parent;
		if (parent)
	toPrintShow = "R, PG & G show,"; 
	else
	toPrintShow = "PG & G show."; }
	else
		toPrintShow = "R, pg & g show.";
		cout << "Enter money: ";
		cin >> money;
		if (money<7.5)
		toPrintMoney = "Not enough money.";
			if (money<10.5)
		toPrintMoney = "Can go to matinee show.";
	else
	toPrintShow = "Can go to events & matinee show. ";
	cout << toPrintShow << endl;
	cout<< toPrintMoney << endl;
	return 0;
}