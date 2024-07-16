#include <iostream>
using namespace std;

int sumrec(int n) {
    if (n == 0) {
        return 0; // base case
    } else {
        return n + sumrec(n-1);
    }
}

int main() {
    int result = sumrec(5);
    cout << "Sum: " << result << endl;
    return 0;
}