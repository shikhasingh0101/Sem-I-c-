#include <iostream>
using namespace std;
int main() {
    const int rows = 3; 
    const int cols = 3; 

    int matrix[rows][cols];
    cout << "Enter elements into the matrix:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
           cout << "Enter element at row " << i + 1 << ", column " << j + 1 << ": ";
           cin >> matrix[i][j];
        }
    }
    cout << "Sum of elements in each row:\n";
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
       cout << "Row " << i + 1 << ": " << rowSum << "\n";
    }

    return 0;
}
