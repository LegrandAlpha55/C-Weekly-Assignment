#include <iostream>
#include <string>
using namespace std;

class Student {
    string name, adm;
    double balance;
public:
    void inputStudent() {
        cout << "Name: "; getline(cin, name);
        cout << "Adm: "; cin >> adm;
        cout << "Balance: "; cin >> balance;
    }
    void makePayment(double amt) { balance -= amt; }
    void displayStatus() { cout << "\nName: " << name << " | Balance: " << balance << endl; }
};

int main() {
    Student s;
    s.inputStudent();
    s.makePayment(3000);
    s.displayStatus();
    return 0;
}