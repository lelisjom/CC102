#include <iostream>

using namespace std;

int main() 
{
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int sum = num1 + num2;
    int difference = num1 - num2;
    double quotient = (double)num1 / num2;
	int product = num1 * num2;
    int remainder = num1 % num2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
	cout << "Quotient: " << quotient << endl;
    cout << "Product: " << product << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}