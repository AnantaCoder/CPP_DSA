#include <iostream>
using namespace std;

int sumrec(int n) {
    if (n == 0) {
        return 1; // base case so that 5*4*3*2*1=120, time complesity(n)
    } else {
        return n * sumrec(n-1);
    }
}

int main() {
    int result = sumrec(5);
    cout << "Factorial of 5: " << result << endl;
    return 0;
}