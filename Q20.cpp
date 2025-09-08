//20. Develop a program that takes four numbers as input and prints the largest among them.
#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;
    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    if (d > mx) mx = d;
    cout << "Largest: " << mx << "\n";
    return 0;
}