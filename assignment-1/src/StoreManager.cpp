#include "../include/StoreManager.h"
#include <iostream>

using namespace std;


void StoreManager::addStock(Inventory& inventory, const string& title, int newCopies) {                                                    // Updating freshly arrived stock of books to the inventory
    Book* book = inventory.findBook(title);
    if (book) {
        book->updateStock(newCopies);
        cout << "Added " << newCopies << " copies of " << title << " to inventory.\n";
    } else {
        cout << title << " does not exist in the inventory.\n";
    }
}


void StoreManager::addNewBook(Inventory& inventory, const string& title, const string& author, int copies, double price, double cost) {    // Adding a new book to the inventory
    Book newBook(title, author, copies, price, cost);
    inventory.addBook(newBook);
    cout << "Added new book: " << title << " to inventory.\n";
}
