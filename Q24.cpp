// 24. Write a program to calculate sum of first N odd natural numbers 
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    long long sum = 0;
    for (int i = 1; i <= N; ++i) sum += 2LL * i - 1;
    cout << "Sum: " << sum << "\n";
    return 0;
}