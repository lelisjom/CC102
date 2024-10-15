#include <iostream>

using namespace std;

int main ()
{

	double sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	double sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	double USDtoPHP = 59.0;
	double PoundtoPHP = 72.0;
	
	cout << "Product Information:\n" << endl;
	
	cout << "Price of sugar (in USD):0.49\n";
	cout << "Price of rice (in Pound):97\n";
	cout << "Price of sardines (in Pound):0.89\n";
	cout << "Price of coffee (in USD):248\n";
	cout << "Price of milk (in USD):24.47\n" << endl;
	
	cout << "Customer Purchase:\n" << endl;
	
	cout << "Enter the quantity of sugar purchase:";
	cin >> sugarQty;
	cout << "Enter the quantity of rice purchase:";
	cin >> riceQty;
	cout << "Enter the quantity of sardines purchase:";
	cin >> sardinesQty;
	cout << "Enter the quantity of coffee purchase:";
	cin >> coffeeQty;
	cout << "Enter the quality of coffee purchase:";
	cin >> milkQty;
	
	
	
	return 0;
	
}