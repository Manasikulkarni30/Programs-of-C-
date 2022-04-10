//C++ Program to find sum of elements in a given array

#include<iostream>
using namespace std;

int main() {

    int arr[5], i, sum = 0;

    cout << "Enter any 5 numbers:";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum of all elements:" << sum;

    return 0;
}
