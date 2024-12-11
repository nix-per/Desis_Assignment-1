#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copies;
    double price;
    double costToStore;

public:
    Book(string t, string a, int c, double p, double cts);
    void displayDetails() const;
    void updateStock(int newCopies);
    bool sellBook(int quantity);
    double getPrice() const;
    string getTitle() const;
};

#endif
