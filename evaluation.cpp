#include <iostream>

using namespace std;

int main() {
    int rows = 7;

    for (int i = 1; i <= rows; i++) {
        for (int k = 1; k < i; k++) {
            cout << "  ";
        }

        for (int j = 1; j <= rows - i + 1; j++) {
            if ((i >= 2 && i <= 5) && (j >= rows - i - 1 && j <= rows - i + 1)) {
                cout << "  ";
            } else {
                if (j % 2 == 1) { 
                    if (i % 2 == 1) {
                        cout << "@ "; 
                    } else {
                        cout << "# "; 
                    }
                } else { 
                    if (i % 2 == 1) {
                        cout << "# "; 
                    } else {
                        cout << "$ "; 
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}