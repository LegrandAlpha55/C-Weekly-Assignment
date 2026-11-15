#include <iostream>
#include <string>
using namespace std;

void getCustomerDetails(string &name, double &units, double &rate) {
    cin.ignore();
    cout << "Enter customer name: "; getline(cin, name);
    cout << "Enter units consumed: "; cin >> units;
    cout << "Enter rate per unit: "; cin >> rate;
}

double calculateBill(double units, double rate) {
    return units * rate;
}

double applyDiscount(double bill, double units) {
    return (units > 100) ? bill * 0.90 : bill;
}

void displayBill(string name, double units, double totalBill, double finalAmount) {
    cout << "\nCustomer: " << name << "\nUnits: " << units << "\nTotal Before Discount: " << totalBill 
         << "\nDiscount: " << (totalBill - finalAmount) << "\nFinal Payable: " << finalAmount << endl;
}

int main() {
    string name;
    double units, rate;
    getCustomerDetails(name, units, rate);
    double bill = calculateBill(units, rate);
    displayBill(name, units, bill, applyDiscount(bill, units));
    return 0;
}
