#include "../include/Customer.h"
#include "../include/Inventory.h" // Included the Inventory header
#include <iostream>

using namespace std;


Customer::Customer(string n) : name(n) {}                                                       // Initialising attributes of a customer

void Customer::buyBook(Inventory& inventory, const string& title, int quantity) {               // Executing sale of a book corresponding to a customer
    Book* book = inventory.findBook(title);
    if (book) {
        if (book->sellBook(quantity)) {
            cout << name << " bought " << quantity << " copy/copies of " << title << endl;
        }
    } else {
        cout << title << " is not available in the inventory.\n";
    }
}
