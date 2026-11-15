#include <iostream>
#include <string>
using namespace std;

void getEmployeeDetails(string &name, double &basic, double &hours, double &rate) {
    cout << "Enter name: "; getline(cin, name);
    cout << "Enter basic salary: "; cin >> basic;
    cout << "Enter overtime hours: "; cin >> hours;
    cout << "Enter rate per hour: "; cin >> rate;
}

double calculateOvertimePay(double hours, double rate) {
    return hours * rate;
}

double calculateNetSalary(double basic, double overtimePay) {
    return basic + overtimePay;
}

void displayPayslip(string name, double basic, double overtimePay, double netSalary) {
    cout << "\nName: " << name << "\nBasic: " << basic << "\nOvertime Pay: " << overtimePay << "\nNet Salary: " << netSalary << endl;
}

int main() {
    string name;
    double basic, hours, rate;
    getEmployeeDetails(name, basic, hours, rate);
    double otPay = calculateOvertimePay(hours, rate);
    displayPayslip(name, basic, otPay, calculateNetSalary(basic, otPay));
    return 0;
}