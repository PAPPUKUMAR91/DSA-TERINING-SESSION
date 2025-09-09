//31. Write a program to reverse a given number
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    if (n < 0) n = -n;
    long long rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    cout << "Reversed: " << rev << "\n";
    return 0;
}