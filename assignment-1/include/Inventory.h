#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "Book.h"
using namespace std;

class Inventory {
private:
    vector<Book> books;

public:
    void addBook(const Book& book);
    void displayInventory() const;
    Book* findBook(const string& title);
};

#endif
