#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    string name, acc;
    double bal;
public:
    BankAccount(string n, string a, double b) : name(n), acc(a), bal(b) {
        cout << "Account successfully created\n";
    }
    void displayAccount() { cout << "Holder: " << name << " | Balance: " << bal << endl; }
    ~BankAccount() { cout << "Account closed successfully\n"; }
};

int main() {
    BankAccount acc("Alice", "123", 5000);
    acc.displayAccount();
    return 0;
}