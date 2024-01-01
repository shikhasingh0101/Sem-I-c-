#include <iostream>
#include <algorithm>  
#include <string>
using namespace std;

int main() {
    const int size = 5;  
    string strArray[size];
    cout << "Enter " << size << " strings:" <<endl;
    for (int i = 0; i < size; i++) {
       cout << "String " << i + 1 << ": ";
       cin >> strArray[i];
    }
    sort(strArray, strArray + size);
    cout << "\nStrings in alphabetical order:" <<endl;
    for (int i = 0; i < size; i++) {
        cout << strArray[i] << endl;
    }

    return 0;
}
