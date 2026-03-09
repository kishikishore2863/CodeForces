//
// Created by Kishi Kishore N on 09/03/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int count=0;
        for (int i=0; i<n; i++) {
            int ele;
            cin>>ele;
            if (ele%2==1) {
                count++;
            }
        }
        if (count%2 == 1) {
            cout<<"NO"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}