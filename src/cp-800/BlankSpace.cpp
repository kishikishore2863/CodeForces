//
// Created by Kishi Kishore N on 15/03/26.
//
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int count =0;
        int k =0;
        for (int i=0; i<n; i++) {
            if (arr[i] == 0) {
                k++;
            }else {
                count = max(count,k);
                k=0;
            }
        }
        if (k>0 && k>count) {
            cout<<k<<endl;
        }else {
            cout<<count<<endl;
        }

    }
    return 0;
}

