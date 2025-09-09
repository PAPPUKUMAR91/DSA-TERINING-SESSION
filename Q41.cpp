//41. Write a program to print all Armstrong numbers under 1000
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    if (n <= 0) return false;
    int temp = n, sum = 0, digits = 0;
    while (temp > 0) { temp /= 10; ++digits; }
    temp = n;
    while (temp > 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    cout << "Armstrong numbers under 1000: ";
    for (int i = 1; i < 1000; ++i) {
        if (isArmstrong(i)) cout << i << " ";
    }
    cout << "\n";
    return 0;
}