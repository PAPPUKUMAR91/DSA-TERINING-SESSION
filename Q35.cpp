//35. Write a program to calculate HCF of two numbers.
#include <iostream>
using namespace std;

int main() {
    long long a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b) { long long t = a % b; a = b; b = t; }
    cout << "HCF: " << a << "\n";
    return 0;
}