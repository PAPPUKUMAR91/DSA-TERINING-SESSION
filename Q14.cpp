//. Write a program that reads two integers from the user and determines if the first integer is divisible by the second integer. 
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers (a b): ";
    cin >> a >> b;

    if (b == 0) {
        cout << "Cannot divide by zero" << endl;
        return 0;
    }

    if (a % b == 0) {
        cout << a << " is divisible by " << b << endl;
    } else {
        cout << a << " is not divisible by " << b << endl;
    }
    return 0;
}