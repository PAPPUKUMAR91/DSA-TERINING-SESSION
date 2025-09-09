//32. Write a program to find the Nth term of the Fibonacci series.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n <= 0) { cout << "Invalid\n"; return 0; }
    if (n <= 2) { cout << "1\n"; return 0; }
    long long a = 1, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b; a = b; b = c;
    }
    cout << "F(" << n << ") = " << b << "\n";
    return 0;
}