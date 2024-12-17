#include <iostream>

using namespace std;

int main() {
    int size = 7;

    for (int i = 1; i <= size; i++) {
        for (int k = 1; k < i; k++) {
            cout << "  ";
        }
        
        for (int j = 1; j <= size - i + 1; j++) {
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
        cout << endl;
    }

    return 0;
}