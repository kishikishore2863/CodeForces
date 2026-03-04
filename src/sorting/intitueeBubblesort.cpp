//
// Created by Kishi Kishore N on 04/03/26.
//
#include <iostream>
using  namespace std;

int main() {
    int arr[] = {45,12,78,34,23,56,11};
    int n = sizeof(arr)/sizeof(int);
    for (int i=0; i<n-1; i++) {
        for (int j=i; j<n-1; j++) {
            if (arr[j]<arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        for (int e:arr)cout<<e<<",";
        cout<<""<<endl;

    }
    for (int e:arr)cout<<e<<",";


    return 0;
}