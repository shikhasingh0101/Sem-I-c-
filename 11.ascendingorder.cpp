#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr[size];
    cout << "Enter " << size << " elements into the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    bool isSorted = true;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }
    if (isSorted) {
        cout << "The array is sorted in ascending order.\n";
    } else {
        cout << "The array is not sorted in ascending order.\n";
    }

    return 0;
}
