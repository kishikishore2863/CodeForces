//
// Created by Kishi Kishore N on 13/04/26.
//
#include <iostream>
using namespace std;

//
// {5,2,7,2,0,3,6,8,1}
// {2,2,0,3,1,5,7,6,8}


int partision(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int main() {
    int arr[] = {5,2,7,2,0,3,6,8,1};
    quickSort(arr,0,8);
    for (int i:arr)cout<<i;
    return 0;
}


void quickSort(int arr[], int low, int high) {
    if (high-low <0)return;

    int part = partision(arr,low,high);
    quickSort(arr,low,part-1);
    quickSort(arr,part+1 , high);
}

int partision(int arr[], int low, int high) {

    int pivot = arr[low];
    int i=low+1;
    int j = high;

    while (i<=j) {
        while (i<=j && arr[i]<=pivot)i++;
        while (i<=j && arr[j]>pivot)j--;
        if (i<j) {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }

    swap(arr[low],arr[j]);
    return j;
}
//  0,1,2,3,4,5,6,7,8
// {5,2,7,2,0,3,6,8,1}
// {2,2,0,3,1,5,7,6,8}