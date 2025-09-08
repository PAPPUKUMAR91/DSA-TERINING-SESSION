//19. Develop a program that takes a month (as an integer from 1 to 12) and a year as input, then prints the number of days in that month, considering leap years.
#include <iostream>
using namespace std;

bool isLeap(int y) {
    return (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
}

int main() {
    int m, y;
    cout << "Enter month (1-12) and year: ";
    cin >> m >> y;

    int days;
    if (m < 1 || m > 12) {
        cout << "Invalid month\n";
        return 0;
    }
    if (m == 2) days = isLeap(y) ? 29 : 28;
    else if (m == 4 || m == 6 || m == 9 || m == 11) days = 30;
    else days = 31;

    cout << "Days: " << days << "\n";
    return 0;
}
