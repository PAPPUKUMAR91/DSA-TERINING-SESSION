//53.Drow the pattern in -Centered Diamond
#include <iostream>
using namespace std;

int main() {
    // Upper half
    for (int i = 1; i <= 5; ++i) {
        for (int j = 0; j < 5 - i; ++j) cout << " ";
        for (int k = 0; k < i; ++k) cout << "* ";
        cout << endl;
    }
    // Lower half
    for (int i = 4; i >= 1; --i) {
        for (int j = 0; j < 5 - i; ++j) cout << " ";
        for (int k = 0; k < i; ++k) cout << "* ";
        cout << endl;
    }
    return 0;
}