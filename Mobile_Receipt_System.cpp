#include <iostream>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double price, totalSales;

    cout << "Enter customer name: " ;
    cin>>customerName;
    cout << "Enter phone model: ";
		cin>>phoneModel;
    cout << "Enter quantity bought: ";
    cin >> quantity;
    cout << "Enter price per phone: ";
    cin >> price;

    totalSales = quantity * price;

    cout << "\n--- Sales Receipt ---" << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity Bought: " << quantity << endl;
    cout << "Price Per Phone: " << price << endl;
    cout << "Total Sales Amount: " << totalSales << endl;
    return 0;
}