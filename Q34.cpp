//34. Write a program to check whether a given number is
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    if (n <= 0) { cout << "No\n"; return 0; }
    if (n == 1) { cout << "Yes\n"; return 0; }
    long long a = 1, b = 1, c;
    while (b < n) {
        c = a + b; a = b; b = c;
    }
    cout << (b == n ? "Yes" : "No") << "\n";
    return 0;
}