//8. Write a program to input three characters from the user and display characters with their corresponding ASCII codes.
#include <iostream>
using namespace std;

int main() {
    char a, b, c;
    cout << "Enter three characters: ";
    cin >> a >> b >> c;

    cout << a << " -> " << static_cast<int>(a) << endl;
    cout << b << " -> " << static_cast<int>(b) << endl;
    cout << c << " -> " << static_cast<int>(c) << endl;
    return 0;
}