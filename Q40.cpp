//40. Write a program to check whether a given number is an Armstrong number or not.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n < 0) n = -n;
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) { temp /= 10; ++digits; }
    temp = n;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    cout << (sum == n ? "Armstrong" : "Not Armstrong") << "\n";
    return 0;
}