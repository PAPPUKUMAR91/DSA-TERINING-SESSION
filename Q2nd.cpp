//2 Write a program to calculate circumference of a circle. 
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double r;
    cout << "Enter radius: ";
    cin >> r;

    double circumference = 2 * PI * r;
    cout << "Circumference: " << circumference << endl;
    return 0;
}