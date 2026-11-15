#include <iostream>
using namespace std;

int main() {
    double balance = 5000.0, amount;
    while (balance > 0) {
        cout << "Balance: " << balance << "\nEnter withdrawal amount: ";
        cin >> amount;
        if (amount > balance || amount <= 0) break;
        balance -= amount;
    }
    cout << "Loop ended. Final Balance: " << balance << endl;
    return 0;
}