// 5. Write a program to ask user about the cost price and selling
#include <iostream>
using namespace std;

int main() {
    double costPrice, sellingPrice;
    cout << "Enter cost price: ";
    cin >> costPrice;
    cout << "Enter selling price: ";
    cin >> sellingPrice;

    if (sellingPrice > costPrice) {
        double profit = sellingPrice - costPrice;
        double profitPercent = (profit / costPrice) * 100.0;
        cout << "Profit: " << profit << " (" << profitPercent << "%)" << endl;
    } else if (sellingPrice < costPrice) {
        double loss = costPrice - sellingPrice;
        double lossPercent = (loss / costPrice) * 100.0;
        cout << "Loss: " << loss << " (" << lossPercent << "%)" << endl;
    } else {
        cout << "No profit, no loss." << endl;
    }
    return 0;
}