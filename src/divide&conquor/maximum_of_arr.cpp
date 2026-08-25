//
// Created by Kishi Kishore N on 13/04/26.
//
#include <iostream>
using namespace std;

int solve(int arr[], int low, int high);
int main() {
    int arr[] = {3, 5, 1, 8, 2, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = solve(arr, 0, n - 1);

    cout << "Maximum element: " << result << endl;

    return 0;
}

int solve(int arr[], int low, int high) {
    if (high == low)return arr[low];

    int mid =(high+low)/2;
    int l =solve(arr,low,mid);
    int r =solve(arr,mid+1,high);
    return max(l,r);
}