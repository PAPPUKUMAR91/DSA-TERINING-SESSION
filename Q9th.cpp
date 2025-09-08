// 9WAP to take date as an input in below given format and convert the date format and display the result as given below.
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter date (DD/MM/YYYY or DD-MM-YYYY): ";
    cin >> input;

    for (char &ch : input) if (ch == '/') ch = '-';

    int d = 0, m = 0, y = 0;
    char sep1, sep2;
    stringstream ss(input);
    if (!(ss >> d >> sep1 >> m >> sep2 >> y) || sep1 != '-' || sep2 != '-') {
        cerr << "Invalid format. Use DD/MM/YYYY or DD-MM-YYYY." << endl;
        return 1;
    }

    const string months[13] = {"", "January","February","March","April","May","June",
                               "July","August","September","October","November","December"};

    if (m < 1 || m > 12 || d < 1 || d > 31) {
        cerr << "Invalid date values." << endl;
        return 1;
    }

    cout << "DD-MM-YYYY: " << setfill('0') << setw(2) << d << "-"
         << setw(2) << m << "-" << setw(4) << y << endl;

    cout << "YYYY-MM-DD: " << setw(4) << y << "-"
         << setw(2) << m << "-" << setw(2) << d << endl;

    cout << "DD Month YYYY: " << setw(2) << d << " " << months[m] << ", " << y << endl;
    return 0;
}