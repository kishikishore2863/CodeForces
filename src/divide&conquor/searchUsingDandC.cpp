//
// Created by Kishi Kishore N on 16/04/26.
//

#include <iostream>
using namespace std;

bool solve(int arr[] ,int i, int j, int search);

int main() {
    int arr[] = {1,9,5,28,90,10,100,45,420,90};
    int n = sizeof(arr)/sizeof(int);
    bool res = solve(arr,0,n,444);
    cout<<res<<endl;
    return 0;
}

bool solve(int arr[] ,int i, int j, int search) {
    if (i == j) {
        if (arr[i] == search) {
            return true;
        }else {
            return false;
        }
    }

    int mid = (i+j)/2;
    return solve(arr,i,mid,search)||solve(arr,mid+1,j,search);
}