//17. Write a program that takes a start year and an end year from the user and prints all the leap years in that range.
#include <iostream>
using namespace std;

bool isLeap(int y) {
    return (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
}

int main() {
    int startYear, endYear;
    cout << "Enter start year and end year: ";
    cin >> startYear >> endYear;

    if (startYear > endYear) swap(startYear, endYear);

    for (int y = startYear; y <= endYear; ++y) {
        if (isLeap(y)) cout << y << "\n";
    }
    return 0;
}