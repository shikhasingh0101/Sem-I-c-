#include <iostream>
using namespace std;

int main() {
    int rows;

   
    cout << "Enter the number of rows for Pascal's triangle: ";
    cin >> rows;
    for (int i = 0; i < rows; i++) {
        int coefficient = 1;
        for (int space = 1; space <= rows - i; space++)
            cout << " ";
        for (int j = 0; j <= i; j++) {
            if (j > 0)
                coefficient = coefficient * (i - j + 1) / j;

             cout << coefficient << " ";
        }

                     cout <<endl;
    }

    return 0;
}
