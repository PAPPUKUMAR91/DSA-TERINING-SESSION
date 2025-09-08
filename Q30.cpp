// 30. Write a program to calculate LCM of two numbers 
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) { long long t = a % b; a = b; b = t; }
    return a;
}

int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a == 0 || b == 0) { cout << "LCM: 0\n"; return 0; }
    long long g = gcd(a < 0 ? -a : a, b < 0 ? -b : b);
    long long lcm = (a / g) * b;
    if (lcm < 0) lcm = -lcm;
    cout << "LCM: " << lcm << "\n";
    return 0;
}