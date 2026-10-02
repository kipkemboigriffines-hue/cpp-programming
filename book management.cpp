#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int copies;

public:
    void inputDetails()
    {
        cout << "Enter book title: ";
        cin >> title;

        cout << "Enter author: ";
        cin >> author;

        cout << "Enter number of copies available: ";
        cin >> copies;
    }

    void borrowBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book borrowed successfully." << endl;
        }
        else
        {
            cout << "Sorry, no copies are available." << endl;
        }
    }

    void displayDetails()
    {
        cout << endl;
        cout << "Book Details" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copies << endl;
    }
};

int main()
{
    Book book;

    cout << "LIBRARY BOOK MANAGEMENT SYSTEM" << endl;
    cout << endl;

    book.inputDetails();

    cout << endl;
    cout << "Borrowing a book..." << endl;
    book.borrowBook();

    book.displayDetails();

    return 0;
}

