//
// Created by Kishi Kishore N on 18/03/26.
//
#include <iostream>
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

        int res = arr[0];
        if (n>0)res = arr[0];
        int value = 0;
        for (int i=1; i<n; i++) {
            res = res^arr[i];
        }

        if (n%2==0) {
            if (res == 0) {
                cout<<1<<endl;
            }else {
                cout<<-1<<endl;
            }
        }else {
            cout<<res<<endl;
        }
    }
    return 0;
}