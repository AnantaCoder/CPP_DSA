#include <bits/stdc++.h>
using namespace std;

void counter(int n){
    if(n!=0){
        cout<<n<<" ";
        return counter(n-1);
    }
}

int main(){

    counter(5);

return 0;

}