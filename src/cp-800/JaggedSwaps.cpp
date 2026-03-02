//
// Created by Kishi Kishore N on 28/02/26.
//
#include<iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        set<int> set;
        vector<int> v;
        for (int i=0; i<n; i++) {
            set.insert(i+1);
            int ele;
            cin>>ele;
            v.push_back(ele);
        }

        for (int i:v) {
            if (!(set.find(i) != set.end())) {
                cout<<"NO"<<endl;
                return 0;
            }
        }


        if (v[0] == 1) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
    return 0;

}