//27. Write a program to calculate factorial of a number 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n < 0) {
        cout << "Invalid\n";
        return 0;
    }
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) fact *= i;
    cout << "Factorial: " << fact << "\n";
    return 0;
}