//
// Created by Kishi Kishore N on 03/03/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int sum =0;
        for (int i =1;i<n;i++) {
            int ele;
            cin>>ele;
            sum +=ele;
        }
        cout<<0-sum<<endl;
    }
}