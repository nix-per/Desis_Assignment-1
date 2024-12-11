#include "../include/Book.h"
#include "../include/Inventory.h"
#include "../include/StoreManager.h"
#include "../include/Cashier.h"
#include "../include/Customer.h"

using namespace std;

int main() {
    Inventory inventory;
    StoreManager manager;
    Customer customer("Alice");
    Cashier cashier;


    // ADDING BOOKS TO INVENTORY :
    //                                 title               author     copies  price  cost   
    manager.addNewBook(inventory, "C++ Programming", "Bjarne Stroustrup", 10, 50.0, 30.0);
    manager.addNewBook(inventory, "Data Structures", "Mark Allen Weiss", 5, 40.0, 25.0);


    // DISPLAYING CURRENT INVENTORY STATUS :
    inventory.displayInventory();


    // FUNCTION FOR CUSTOMER BUYING A BOOK :
    //                               title      quantity
    customer.buyBook(inventory, "C++ Programming", 2);


    // GENERATING BILL :
    //                        title    quantity  price
    cashier.generateBill("C++ Programming", 2, 50.0);


    // UPDATING THE INVENTORY :
    //                                title     new copies
    manager.addStock(inventory, "C++ Programming", 5);


    // DISPLAYING UPDATED INVENTORY STATUS :
    inventory.displayInventory();

    return 0;
}
