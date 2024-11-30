#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string accountType, accountLevel;
    double accountBalance, interestRate = 0.0;

    cout << "Enter account type (Personal/Business): ";
    cin >> accountType;
    transform(accountType.begin(), accountType.end(), accountType.begin(), ::tolower);

    cout << "Enter account level (Standard/Gold/Platinum): ";
    cin >> accountLevel;
    transform(accountLevel.begin(), accountLevel.end(), accountLevel.begin(), ::tolower);

    cout << "Enter your account balance: ";
    cin >> accountBalance;

    if (accountType == "personal") {
        if (accountLevel == "standard") {
            interestRate = 1.2;
        } else if (accountLevel == "gold") {
            if (accountBalance >= 5000) {
                interestRate = 2.3;
            } else if (accountBalance >= 1000) {
                interestRate = 1.9;
            }
        }
    } else if (accountType == "business") {
        if (accountLevel == "standard") {
            if (accountBalance >= 1500) {
                interestRate = 1.7;
            }
        } else if (accountLevel == "platinum") {
            if (accountBalance >= 10000) {
                interestRate = 2.5;
            }
        }
    }

    if (interestRate > 0.0) {
        cout << "Your interest rate is " << interestRate << "%." << endl;
    } else {
        cout << "You are not eligible for interest." << endl;
    }

    return 0;
}
