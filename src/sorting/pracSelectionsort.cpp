//
// Created by Kishi Kishore N on 20/03/26.
//
#include <iostream>
using namespace std;

int main() {
    int n = 9;
    char arr[] = {'s','r','a','j','k','p','b','t','d'};

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // swap
        if (minIndex != i) {
            char temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
        cout<<i+1<<endl;
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout<<endl;
    }

    // print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}