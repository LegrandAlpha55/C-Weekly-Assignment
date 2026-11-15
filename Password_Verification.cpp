#include <iostream>
#include <string>
using namespace std;

int main() {
    string user, pass;
    do {
        cout << "Username: "; cin >> user;
        cout << "Password: "; cin >> pass;
        if (user == "admin" && pass == "1234") {
            cout << "Access Granted\n";
            break;
        }
        cout << "Incorrect credentials, try again\n";
    } while (true);
    return 0;
}