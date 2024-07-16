#include <iostream>
using namespace std;

int countere(int n){
    if(n!=0){
        cout<<n<<" ";
            return countere(n-1);
    }
}
int main(){
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    countere(n);

}