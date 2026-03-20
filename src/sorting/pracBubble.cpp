#include <iosfwd>
//
// Created by Kishi Kishore N on 20/03/26.
//
#include<iostream>
using namespace std;

int main() {
    int n= 9 ;
    char arr[] = {'s','r','a','j','k','p','b','t','d'};
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<n-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }else {

            }
        }
        cout<<i+1<<endl;
        for (char c:arr) {
            cout<<c<<" ";
        }
        cout<<endl;
    }

    return 0;
}