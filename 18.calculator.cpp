#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double num1, double num2) {
        return num1 + num2;
    }
    double subtract(double num1, double num2) {
        return num1 - num2;
    }
    double multiply(double num1, double num2) {
        return num1 * num2;
    }
    double divide(double num1, double num2) {
        if (num2 != 0) {
            return num1 / num2;
        } else {
           cout << "Error: Division by zero is not allowed." <<endl;
            return 0.0; 
        }
    }
};

int main() {
   
    Calculator calculator;
    double num1, num2;
   cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    int choice;
    cout << "Select operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter choice (1-4): ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Result: " << calculator.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calculator.subtract(num1, num2) <<endl;
            break;
        case 3:
            cout << "Result: " << calculator.multiply(num1, num2) <<endl;
            break;
        case 4:
            cout << "Result: " << calculator.divide(num1, num2) <<endl;
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
            break;
    }

    return 0;
}
