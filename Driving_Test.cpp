#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    cout << "Enter student name: ";
    getline(cin, studentName);
    cout << "Enter theory test marks: ";
    cin >> theoryMarks;
    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << "\nStudent Name: " << studentName << endl;
    cout << "Theory Marks: " << theoryMarks << endl;
    cout << "Practical Marks: " << practicalMarks << endl;
    cout << "Average Score: " << averageScore << endl;
    cout << "Result: " << (averageScore >= 50 ? "Passed" : "Failed") << endl;
    return 0;
}