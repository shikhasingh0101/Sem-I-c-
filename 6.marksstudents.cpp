#include <iostream>
using namespace std;
int main() {
   
    int subject1, subject2, subject3, subject4, subject5;
      cout << "Enter marks for Subject 1: ";
      cin >> subject1;

      cout << "Enter marks for Subject 2: ";
      cin >> subject2;

      cout << "Enter marks for Subject 3: ";
      cin >> subject3;

      cout << "Enter marks for Subject 4: ";
      cin >> subject4;

      cout << "Enter marks for Subject 5: ";
      cin >> subject5;

    float average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5.0;

    if (average >= 90) {
       cout << "Grade: A\n";
    } else if (average >= 80) {
      cout << "Grade: B\n";
    } else if (average >= 70) {
        cout << "Grade: C\n";
    } else if (average >= 60) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: F\n";
    }

    return 0;
}
