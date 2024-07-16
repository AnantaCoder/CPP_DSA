#include <iostream>
using namespace std;

void printName(int n, string name) {
    if (n != 0) {
        cout << name << " ";
        printName(n - 1, name);
    }
}

int main() {
    cout << "Hello the name nth times" << endl;
    printName(5, "anant");
    return 0;
}