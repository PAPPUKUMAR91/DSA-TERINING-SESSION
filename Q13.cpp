//13. Develop a program that takes a student's score (0-100) as input and prints the corresponding grade (e.g., A, B, C, D, F) based on a grading scale. 
#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter score (0-100): ";
    cin >> score;

    if (score < 0 || score > 100) {
        cout << "Invalid score";
    } else if (score >= 90) {
        cout << "A";
    } else if (score >= 80) {
        cout << "B";
    } else if (score >= 70) {
        cout << "C";
    } else if (score >= 60) {
        cout << "D";
    } else {
        cout << "F";
    }
    cout << endl;
    return 0;
}