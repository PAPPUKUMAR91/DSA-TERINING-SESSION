//26. Write a program to calculate sum of cubes of first N natural numbers
#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    long long sum = 0;
    for (int i = 1; i <= N; ++i) sum += 1LL * i * i * i;
    cout << "Sum: " << sum << "\n";
    return 0;
}