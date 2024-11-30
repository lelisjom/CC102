#include <iostream>

using namespace std;

int main() {
    char symbol1, symbol2, symbol3;

    cout << "Enter 1st symbol to use (*, ^, #, $, @): ";
    cin >> symbol1;
    cout << "Enter 2nd symbol to use (*, ^, $, @): ";
    cin >> symbol2;
    cout << "Enter 3rd symbol to use (*, $, @): ";
    cin >> symbol3;

    cout << "You picked: " << symbol1 << " " << symbol2 << " " << symbol3 << endl;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << symbol2;
        }
        cout << symbol3 << endl;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) {
            cout << symbol1;
        }
        for (int j = 0; j < 5; j++) {
            cout << symbol2;
        }
        cout << symbol3 << endl;
    }

    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << symbol2;
        }
        cout << symbol3 << endl;
    }

    return 0;
}
