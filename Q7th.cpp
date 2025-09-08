//7. Write a program to input an ASCII code from the user and print its corresponding character
#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Enter ASCII code (0-255): ";
    cin >> code;

    if (code < 0 || code > 255) {
        cerr << "Please enter a value between 0 and 255." << endl;
        return 1;
    }

    char ch = static_cast<char>(code);
    cout << "Character: " << ch << endl;
    return 0;
}