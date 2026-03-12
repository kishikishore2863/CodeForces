//
// Created by Kishi Kishore N on 12/03/26.
//
#include <iostream>
using namespace std;

int main() {
    int arr[]= {4,8,2,3,9,16,10};
    int n=7;
    for (int i=1;i<n;i++) {
        int j = i-1;
        int key = arr[i];
        while (j>=0 && key<arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=arr[i];
    }
    for (int i:arr)cout<<i<<" ";
    return 0;
}