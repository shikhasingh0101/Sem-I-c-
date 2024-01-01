
#include <iostream>
#include <vector>

using namespace std;

// Base class for products
class Product {
public:
    int productID;
    string name;
    double price;

    Product(int id, string productName, double productPrice) {
        productID = id;
        name = productName;
        price = productPrice;
    }
};

// Derived class for Electronics
class Electronics : public Product {
public:
    Electronics(int id, string name, double price) : Product(id, name, price) {
    }
};

// Derived class for Clothing
class Clothing : public Product {
public:
    Clothing(int id, string name, double price) : Product(id, name, price) {
    }
};

// Derived class for Books
class Books : public Product {
public:
    Books(int id, string name, double price) : Product(id, name, price) {
    }
};

// Shopping cart to store products
class ShoppingCart {
public:
    vector<Product> cart;

    void addToCart(Product product) {
        cart.push_back(product);
    }

    double calculateTotalPrice() {
        double total = 0;
        for (const Product &product : cart) {
            total += product.price;
        }
        return total;
    }

    void displayCart() {
        if (cart.empty()) {
            cout << "Your shopping cart is empty." << endl;
        } else {
            cout << "Items in your shopping cart:" << endl;
            for (const Product &product : cart) {
                cout << "Product ID: " << product.productID << ", Name: " << product.name << ", Price: " << product.price << endl;
            }
            cout << "Total Price: $" << calculateTotalPrice() << endl;
        }
    }
};

int main() {
    // Create some sample products
    Electronics laptop(1, "Laptop", 800.0);
    Clothing shirt(2, "T-Shirt", 20.0);
    Books novel(3, "Great Novel", 15.0);

    // Initialize the shopping cart
    ShoppingCart cart;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Laptop to Cart\n";
        cout << "2. Add T-Shirt to Cart\n";
        cout << "3. Add Great Novel to Cart\n";
        cout << "4. Display Cart\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cart.addToCart(laptop);
                cout << "Laptop added to cart." << endl;
                break;
            case 2:
                cart.addToCart(shirt);
                cout << "T-Shirt added to cart." << endl;
                break;
            case 3:
                cart.addToCart(novel);
                cout << "Great Novel added to cart." << endl;
                break;
            case 4:
                cart.displayCart();
                break;
            case 5:
                cout << "Thank you for shopping. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 5);

    return 0;


 }

