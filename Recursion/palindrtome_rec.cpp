#include <iostream>
using namespace std;
bool isPalindrome(int arr[], int start, int end) {
    // Base case: if start >= end, we've checked all elements
    if (start >= end) return true;
    //first and last not equal = not palindrome
    if (arr[start] != arr[end]) return false;
    // Check the next elements
    return isPalindrome(arr, start + 1, end - 1);
}
int main() {
    int arr[] = {1, 2, 3,4, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    if (isPalindrome(arr, 0, size - 1)) {
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;   
    }
    return 0;
}
