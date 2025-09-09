//33. Write a program to print first N terms of Fibonacci series.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n <= 0) { cout << "Invalid\n"; return 0; }
    if (n == 1) { cout << "1\n"; return 0; }
    if (n == 2) { cout << "1 1\n"; return 0; }
    cout << "1 1 ";
    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b; a = b; b = c;
        cout << c << " ";
    }
    cout << "\n";
    return 0;
}