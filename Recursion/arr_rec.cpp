#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start , int end){
        //base case
        if(start>=end ) return;
        //swap
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end ] = temp;
        //recursive function
        reverseArray(arr, start +1, end-1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    reverseArray(arr,0,n-1);
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";

return 0;
}