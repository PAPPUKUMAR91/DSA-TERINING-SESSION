//28. Write a program to count digits in a given number 
#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;
    if (n == 0) { cout << "Digits: 1\n"; return 0; }
    if (n < 0) n = -n;
    int count = 0;
    while (n > 0) { n /= 10; ++count; }
    cout << "Digits: " << count << "\n";
    return 0;
}