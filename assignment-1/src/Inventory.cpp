#include "../include/Inventory.h"
#include <iostream>

using namespace std;


void Inventory::addBook(const Book& book) {             // Adding a new book to the inventory
    books.push_back(book);
}

void Inventory::displayInventory() const {              // Displaying current details (status) of the inventory
    cout << "Inventory:\n";
    for (const auto& book : books) {
        book.displayDetails();
    }
}

Book* Inventory::findBook(const string& title) {        // Checking for the availability of a certain book in the inventory
    for (auto& book : books) {
        if (book.getTitle() == title) {
            return &book;
        }
    }
    return nullptr;
}
