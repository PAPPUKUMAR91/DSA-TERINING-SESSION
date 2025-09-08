//3. Write a program to calculate simple interest
#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter annual rate (%): ";
    cin >> rate;
    cout << "Enter time (years): ";
    cin >> time;

    double si = (principal * rate * time) / 100.0;
    double amount = principal + si;

    cout << "Simple Interest: " << si << endl;
    cout << "Total Amount: " << amount << endl;
    return 0;
}