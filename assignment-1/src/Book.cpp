#include "../include/Book.h"

using namespace std;

// THE DETAILS ABOUT "MAGAZINES" CAN BE INCLUDED THROUGH THE BOOK CLASS ITSELF
// THE ATTRIBUTES FOR MAGAZINES REMAIN THE SAME I.E. COPIES, TITLE, ETC.



Book::Book(string t, string a, int c, double p, double cts)                   // Initialising attributes of a book
    : title(t), author(a), copies(c), price(p), costToStore(cts) {}  
     
void Book::displayDetails() const {                                           // Displaying details of each book
    cout << "Title: " << title << ", Author: " << author 
         << ", Copies: " << copies << ", Price: ₹" << price << endl;
}

void Book::updateStock(int newCopies) {                                       // Updation in number of books on addition of new copies
    copies += newCopies;
}

bool Book::sellBook(int quantity) {                                           // Updation in number of copies on sale of a book
    if (quantity <= copies) {
        copies -= quantity;
        return true;
    } else {
        cout << "Insufficient stock for " << title << endl;
        return false;
    }
}

double Book::getPrice() const { return price; }                               // Retrieving price of a book
string Book::getTitle() const { return title; }                               // Retrieving title of a book
