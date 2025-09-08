//15. Create a program that takes the lengths of three sides of a triangle as input and determines whether the triangle is equilateral, isosceles, or scalene. 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three side lengths: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Invalid sides" << endl;
        return 0;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Not a triangle" << endl;
        return 0;
    }

    if (a == b && b == c) {
        cout << "Equilateral" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Isosceles" << endl;
    } else {
        cout << "Scalene" << endl;
    }
    return 0;
}