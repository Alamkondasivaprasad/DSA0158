#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
    // Constructor
    Book(string t, string a) : title(t), author(a) {
        cout << "Book created: Title - " << title << ", Author - " << author << endl;
    }

    // Destructor
    ~Book() {
        cout << "Book titled: " << title << " by " << author << " is destroyed." << endl;
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    Book book("1984", "George Orwell");
    book.display();
    return 0;
}

