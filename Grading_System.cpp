#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    int marks;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter exam marks: ";
    cin >> marks;

    cout << "\nStudent Name: " << studentName << "\nMarks: " << marks << "\nGrade: ";
    if (marks >= 70) cout << "A" << endl;
    else if (marks >= 60) cout << "B" << endl;
    else if (marks >= 50) cout << "C" << endl;
    else if (marks >= 40) cout << "D" << endl;
    else cout << "E" << endl;

    return 0;
}