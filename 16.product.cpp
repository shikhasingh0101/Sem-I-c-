#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int productId;
    string productName;
    float price;
    int quantityInStock;

public:
    Product(int id, const string& name, float pr, int quantity)
        : productId(id), productName(name), price(pr), quantityInStock(quantity) {}
    void displayProductInfo() const {
        cout << "Product ID: " << productId << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
    }
    int getProductId() const {
        return productId;
    }
    const string& getProductName() const {
        return productName;
    }

    float getPrice() const {
        return price;
    }
    int getQuantityInStock() const {
        return quantityInStock;
    }
};

int main() {
   
    Product product1(101, "Laptop", 899.99, 10);
    Product product2(102, "Smartphone", 499.99, 20);

   
    cout << "Product 1 Information:" << endl;
    product1.displayProductInfo();

    cout << "\nProduct 2 Information:" << endl;
    product2.displayProductInfo();

    return 0;
}
