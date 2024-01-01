
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; ++i) {
        cout << "*";
    }
    cout <<endl;
    for (int i = 1; i <= 3; ++i) {
        cout << "*";
        if (i <= 0) {
            for (int j = 1; j <= 3; ++j) {
                cout << " ";
            }
        }
        else {
            for (int j = 1; j <= 1; ++j) {
                cout << " ";
            }
            cout << "*";
        }

      cout << endl;
    }
    for (int i = 1; i <= 5; ++i) {
        cout << "*";
    }
    cout <<endl;

    return 0;
}
