
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string holderName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string number, double amount)
    {
        holderName = name;
        accountNumber = number;
        balance = amount;

        cout << "Account successfully created" << endl;
    }

    void displayAccount()
    {
        cout << endl;
        cout << "----- Account Details -----" << endl;
        cout << "Account Holder: " << holderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;
    }

    ~BankAccount()
    {
        cout << "Account closed successfully" << endl;
    }
};

int main()
{
    BankAccount account1("John Kamau", "1234567890", 25000.00);

    account1.displayAccount();

    return 0;
}
