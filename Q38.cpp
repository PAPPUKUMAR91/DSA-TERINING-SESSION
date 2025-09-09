//38. Write a program to print all Prime numbers between two given numbers.
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) swap(a, b);
    cout << "Primes between " << a << " and " << b << ": ";
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) cout << i << " ";
    }
    cout << "\n";
    return 0;
}