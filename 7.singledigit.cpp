#include <iostream>
using namespace std;

int main() {
   
    cout << "Enter a number: ";
    int userNumber;
    cin >> userNumber;

   
    if (userNumber <= 0) {
        cout << "Please enter a positive number.\n";
        return 1; 
    }

    int sum = 0;

   
    while (userNumber != 0) {
        sum += userNumber;
        userNumber--;
    }
    cout << "Sum of numbers: " << sum <<endl;

    return 0; 
}
