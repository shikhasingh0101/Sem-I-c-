#include <iostream>
using namespace std;

int main() {
 
  int pin;
  double balance = 5000.00;
  double amount;
  int choice; 

 
  cout << "Enter your PIN: ";
  cin >> pin;

  
  if (pin == 1234) {
    cout << "\nWelcome to the ATM!\n";
    cout << "1. Check balance\n";
    cout << "2. Deposit\n";
    cout << "3. Withdraw\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;

   
    switch (choice) {
      case 1:
        cout << "\nYour balance is $" << balance << endl;
        break;
      case 2:
        cout << "\nEnter the amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "\n$" << amount << " has been deposited.\n";
        cout << "Your new balance is $" << balance << endl;
        break;
      case 3:
        cout << "\nEnter the amount to withdraw: ";
        cin >> amount;
        if (amount <= balance) {
          balance -= amount;
          cout << "\n$" << amount << " has been withdrawn.\n";
          cout << "Your new balance is $" << balance << endl;
        } else {
          cout << "\nInsufficient funds.\n";
        }
        break;
      case 4:
        cout << "\nThank you for using the ATM!\n";
        break;
      default:
        cout << "\nInvalid choice.\n";
    }
  } else {
    cout << "\nInvalid PIN.\n";
  }

  return 0;
}
