//
// Created by Kishi Kishore N on 06/05/26.
//
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)cin>>arr[i];

        int k =abs(arr[0]-1);

        for (int i=1; i<n; i++) {

            k = gcd(k,abs(arr[i]-(i+1)));
        }
        cout<<k<<endl;
    }
    return 0;
}