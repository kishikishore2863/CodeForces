//
// Created by Kishi Kishore N on 22/03/26.
//
#include<iostream>
using namespace std;

void desort(int* arr,int n);
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
        int prefix[n];
        prefix[0] = arr[0];
        int flag =0;
        for (int i=1; i<n; i++) {
            if (prefix[i-1] == arr[i]) {
                flag=1;
                break;
            }else {
                prefix[i] = prefix[i-1]+arr[i];
            }
        }
        if (flag ==1) {
            cout<<"YES"<<endl;
            desort(arr,n);
            for (int a:arr) {
                cout<<a<<" ";
            }
            cout<<endl;
        }else {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}


void desort(int* arr,int n) {

    for (int i=0; i<n-1; i++) {
        int curr = i;
        for (int j=i+1; j<n; j++) {
            if (*(arr+curr) < *(arr+j)) {
                curr = j;
            }
        }
        if (curr!=i) {
            int temp =  *(arr+i);
            *(arr+i) = *(arr+curr);
            *(arr+curr) = temp;
        }
    }
}