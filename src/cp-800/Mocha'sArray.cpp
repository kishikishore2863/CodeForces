//
// Created by Kishi Kishore N on 20/03/26.
//
#include <iostream>
using namespace std;

int gcd(int a, int b);
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

        int res = arr[0];

        for (int i=1; i<n; i++) {
            res = gcd(res,arr[i]);
        }
        cout<<res<<endl;
    }
    // int res = gcd(3,6);

    return 0;
}

int gcd(int a, int b) {
    if (a == 0)return b;
    return gcd(b,a%b);
}
