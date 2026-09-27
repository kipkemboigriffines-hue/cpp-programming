#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare variables
    string customerName;
    string phoneModel;
    int quantity;
    double pricePerPhone;
    double totalSalesAmount;

    // Prompt the user to enter details
    cout << "Enter customer name: " << endl;
    cin >> customerName;

    cout << "Enter phone model: " << endl;
    cin >> phoneModel;

    cout << "Enter quantity bought: " << endl;
    cin >> quantity;

    cout << "Enter price per phone: " << endl;
    cin >> pricePerPhone;

    // Calculate total sales amount
    totalSalesAmount = quantity * pricePerPhone;

    // Display the receipt
    cout << endl;
    cout << "====================================" << endl;
    cout << "       MOBILE PHONE RECEIPT         " << endl;
    cout << "====================================" << endl;

    cout << "Customer Name: " << customerName << endl;
    cout << "Phone Model: " << phoneModel << endl;
    cout << "Quantity Bought: " << quantity << endl;
    cout << "Price Per Phone: " << pricePerPhone << endl;
    cout << "Total Sales Amount: " << totalSalesAmount << endl;

    cout << "====================================" << endl;

    return 0;
}
