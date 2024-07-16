#include <bits/stdc++.h>
using namespace std;
int fibo(int num){
    if(num==0) return 0;
    if(num==1) return 1;
    return fibo(num-1)+fibo(num-2);
}

int main(){

    fibo(5);
    cout << "Fibonacci series up to " << 5<< " terms:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << fibo(i) << " ";
    }


return 0;

}