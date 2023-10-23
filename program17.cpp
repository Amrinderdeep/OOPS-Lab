#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ShoppingCart {
private:
    vector<string> items;

public:
    void addItem(const string& item) {
        items.push_back(item);
        cout << item << " has been added to your cart." << endl;
    }

    void removeItem(const string& item) {
        for (int i = 0; i < items.size(); i++) {
            if (items[i] == item) {
                cout << item << " has been removed from your cart." << endl;
                items.erase(items.begin() + i);
                return;
            }
        }
        cout << item << " was not found in your cart." << endl;
    }

    void displayCart() {
        if (items.empty()) {
            cout << "Your shopping cart is empty." << endl;
        } else {
            cout << "Items in your shopping cart:" << endl;
            for (const string& item : items) {
                cout << "- " << item << endl;
            }
        }
    }
};

int main() {
    ShoppingCart cart;

    cout << "Welcome to the shopping cart program!" << endl;

    while (true) {
        cout << "\nMenu:\n1. Add item to cart\n2. Remove item from cart\n3. Display cart\n4. Quit\n";
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string item;
                cout << "Enter the item name: ";
                cin.ignore(); 
                getline(cin, item);
                cart.addItem(item);
                break;
            }
            case 2: {
                string item;
                cout << "Enter the item name to remove: ";
                cin.ignore(); 
                getline(cin, item);
                cart.removeItem(item);
                break;
            }
            case 3:
                cart.displayCart();
                break;
            case 4:
                cout << "Thank you for using the shopping cart program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
