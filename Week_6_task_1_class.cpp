
#include <iostream>
#include <string>
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
        getline(cin, title);

        cout << "Enter author name: ";
        getline(cin, author);

        cout << "Enter number of available copies: ";
        cin >> copies;
    }

    void borrowBook()
    {
        if (copies > 0)
        {
            copies--;
            cout << "Book borrowed successfully!" << endl;
        }
        else
        {
            cout << "Sorry, no copies are available." << endl;
        }
    }

    void displayDetails()
    {
        cout << endl;
        cout << "----- Book Details -----" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Available Copies: " << copies << endl;
    }
};

int main()
{
    Book book1;

    book1.inputDetails();

    cout << endl;
    cout << "Borrowing a book..." << endl;

    book1.borrowBook();

    book1.displayDetails();

    return 0;
}
