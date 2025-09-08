//10 WAP to take time as an input in below given format and convert the time format and display the result as given below. User Input date format – “HH:MM”
#include <iostream>
using namespace std;

int main() {
    int hour, minute;
    char colon;

    cout << "Enter time in HH:MM format: ";
    cin >> hour >> colon >> minute;

    string period = "AM";

    if (hour == 0) {
        hour = 12; // Midnight
    } else if (hour == 12) {
        period = "PM"; // Noon
    } else if (hour > 12) {
        hour -= 12;
        period = "PM";
    }

    cout << "Converted time: ";
    printf("%02d:%02d %s\n", hour, minute, period.c_str());

    return 0;
}