// 29. Write a program to check whether a given number is a Prime number or not 
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    if (n <= 1) { cout << "Not prime\n"; return 0; }
    if (n <= 3) { cout << "Prime\n"; return 0; }
    if (n % 2 == 0 || n % 3 == 0) { cout << "Not prime\n"; return 0; }
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) { cout << "Not prime\n"; return 0; }
    }
    cout << "Prime\n";
    return 0;
}