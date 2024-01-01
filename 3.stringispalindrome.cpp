#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
  for (int i = 0; i < str.length() / 2; i++) {
    if (str[i] != str[str.length() - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
 
  string str;
  cout << "Enter a string: ";
  cin >> str;

  if (isPalindrome(str)) {
    cout << str << " is a palindrome." << endl;
  } else {
    cout << str << " is not a palindrome." << endl;
  }

  return 0;
}