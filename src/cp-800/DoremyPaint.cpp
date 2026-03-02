//
// Created by Kishi Kishore N on 28/02/26.
//
#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        map<int,int> hashmap;
        for (int i=0; i<n; i++) {
            int ele;
            cin>>ele;
            arr[i] = ele;
        }

        for (int i=0; i<n; i++) {
            hashmap[arr[i]]++;
        }
        if (hashmap.size()>=3) {
            cout<<"NO"<<endl;

        }else {
            int ele1 = hashmap.begin()->second;
            int ele2 = hashmap.rbegin()->second;
            if (ele1==ele2) {
                cout<<"YES"<<endl;
            }else if (n % 2 == 1 && abs(ele1 - ele2) == 1)  {
                cout<<"YES"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}