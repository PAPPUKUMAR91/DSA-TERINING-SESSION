//4. Write a program to calculate volume of a cuboid. 
#include <iostream>
using namespace std;

int main() {
    double length, width, height;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;

    double volume = length * width * height;
    cout << "Volume of cuboid: " << volume << endl;
    return 0;
}