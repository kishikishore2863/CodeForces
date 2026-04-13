//
// Created by Kishi Kishore N on 13/04/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<s[0];
        for (int i=1; i<s.length()-1; i=i+2) {
            cout<<s[i];
        }
        cout<<s[s.length()-1]<<endl;
    }
    return 0;
}