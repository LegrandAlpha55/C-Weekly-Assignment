#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int age, score;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter exam score: ";
    cin >> score;

    cout << "Decision: ";
    if (age >= 18) {
        if (score >= 50) cout << "Admitted" << endl;
        else cout << "Not Admitted: Low Score" << endl;
    } else {
        cout << "Not Admitted: Underage" << endl;
    }
    return 0;
}