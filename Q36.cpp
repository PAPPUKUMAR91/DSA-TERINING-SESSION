//36. Write a program to check whether two given numbers are co-prime numbers or not.
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) { long long t = a % b; a = b; b = t; }
    return a;
}

int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << (gcd(a, b) == 1 ? "Co-prime" : "Not co-prime") << "\n";
    return 0;
}