//11. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3;

    cout << "Enter three characters: ";
    cin >> c1 >> c2 >> c3; // inputs skip whitespace

    cout << c1 << " -> " << static_cast<int>(c1) << '\n';
    cout << c2 << " -> " << static_cast<int>(c2) << '\n';
    cout << c3 << " -> " << static_cast<int>(c3) << '\n';

    return 0;
}