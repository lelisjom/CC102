#include <iostream>

using namespace std;

int main() {
    int rows = 8;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j < i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= rows - i + 1; j++) {
            cout << "# ";
        }
        cout << endl;
    }

    return 0;
	
}