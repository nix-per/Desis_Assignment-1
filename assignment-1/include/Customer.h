#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Inventory; // Made the forward declaration of Inventory class, since the function "buyBook" contains an "Inventory&" parameter

class Customer {
private:
    string name;

public:
    Customer(string n);
    void buyBook(Inventory& inventory, const string& title, int quantity);
};

#endif

