//18. Write a program that takes three numbers as input and finds the middle (second largest) number. 
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int mid;
    if ((a >= b && a <= c) || (a <= b && a >= c)) mid = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c)) mid = b;
    else mid = c;

    cout << "Middle (second largest): " << mid << "\n";
    return 0;
}