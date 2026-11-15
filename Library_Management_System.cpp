#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    int copies;
public:
    void inputDetails() {
        cout << "Title: "; getline(cin, title);
        cout << "Author: "; getline(cin, author);
        cout << "Copies: "; cin >> copies;
    }
    void borrowBook() { if(copies > 0) copies--; }
    void displayDetails() { cout << "\nTitle: " << title << "\nAuthor: " << author << "\nCopies: " << copies << endl; }
};

int main() {
    Book b;
    b.inputDetails();
    b.borrowBook();
    b.displayDetails();
    return 0;
}