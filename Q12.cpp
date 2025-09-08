//12 Create a program that takes a person's age as input and classifies them into different age groups (e.g., child,teenager, adult, senior). 
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age";
    } else if (age <= 12) {
        cout << "Child";
    } else if (age <= 19) {
        cout << "Teenager";
    } else if (age <= 64) {
        cout << "Adult";
    } else {
        cout << "Senior";
    }
    cout << endl;
    return 0;
}