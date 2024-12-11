#ifndef STOREMANAGER_H
#define STOREMANAGER_H

#include "Inventory.h"  // Added to call the methods of the Inventory class
#include <string>
using namespace std;

class StoreManager {
public:
    void addStock(Inventory& inventory, const string& title, int newCopies);
    void addNewBook(Inventory& inventory, const string& title, const string& author, int copies, double price, double cost);
};

#endif
