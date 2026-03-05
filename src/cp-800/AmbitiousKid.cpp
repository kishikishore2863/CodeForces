//
// Created by Kishi Kishore N on 05/03/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) {
        int elem;
        cin>>elem;
        arr[i] = elem;
    }
    int minimum = INT_MAX;
    for (int i =0; i<n; i++) {
        minimum = min(minimum,abs(arr[i]));
    }
    cout<<minimum<<endl;
    return 0;

}