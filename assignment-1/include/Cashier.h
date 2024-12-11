#ifndef CASHIER_H
#define CASHIER_H

#include <string>
using namespace std;

class Cashier {
public:
    void generateBill(const string& bookTitle, int quantity, double pricePerBook);
};

#endif
