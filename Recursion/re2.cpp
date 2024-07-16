#include <iostream>
using namespace std;
//printiing 1 to n

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        cout << n << " ";
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNumbers(n);
    return 0;
}