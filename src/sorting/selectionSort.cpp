//
// Created by Kishi Kishore N on 13/03/26.
//
#include <iostream>
using namespace std;

int main() {
    int arr[] = {45,12,78,34,23,56,11};
    int n =7 ;
    for (int i=0; i<n;i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[j]<arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
            }
        }
    }

    for (int i:arr)cout<<i<<",";
    return 0;
}