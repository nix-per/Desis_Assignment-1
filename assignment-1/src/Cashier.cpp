#include "../include/Cashier.h"
#include <iostream>

using namespace std;


void Cashier::generateBill(const string& bookTitle, int quantity, double pricePerBook) {     // Generating bill corresponding to each purchase
    double total = quantity * pricePerBook;
    cout << "Bill: " << quantity << " x ₹" << pricePerBook << " = ₹" << total << endl;
}
