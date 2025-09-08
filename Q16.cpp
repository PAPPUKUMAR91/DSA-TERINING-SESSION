//16. Develop a program that converts a temperature from Fahrenheit to Celsius or vice versa based on user input. The user should specify the type of conversion.
#include <iostream>
using namespace std;

int main() {
    char type;
    double temp, result;

    cout << "Convert (F->C or C->F). Enter 'F' if input is Fahrenheit, 'C' if Celsius: ";
    cin >> type;

    if (type == 'F' || type == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        result = (temp - 32) * 5.0 / 9.0;
        cout << "Celsius: " << result << endl;
    } else if (type == 'C' || type == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        result = (temp * 9.0 / 5.0) + 32;
        cout << "Fahrenheit: " << result << endl;
    } else {
        cout << "Invalid choice. Use 'F' or 'C'." << endl;
    }

    return 0;
}