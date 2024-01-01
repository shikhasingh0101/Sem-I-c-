#include <iostream>
#include <algorithm>
using namespace std;

void generatepermutations(string& str, int start, int end)
{
    if (start == end) {
       cout << str << endl;
        return;
    }

    for (int i = start; i <= end; ++i) {
        swap(str[start], str[i]);
        generatepermutations(str, start + 1, end); 
        swap(str[start], str[i]);
    }
}

int main() {
   string input;
    cout << "Enter a string: ";
    getline(cin, input);

    sort(input.begin(), input.end());
    generatepermutations(input, 0, input.length() - 1);

    return 0;
}
