#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    double salary;
    for (int i = 1; i <= 5; i++) {
        cout << "Employee " << i << " Name: "; cin >> ws; getline(cin, name);
        cout << "Basic Salary: "; cin >> salary;
        double bonus = 0.05 * salary;
        cout << "Bonus: " << bonus << " | Total Salary: " << salary + bonus << "\n\n";
    }
    return 0;
}