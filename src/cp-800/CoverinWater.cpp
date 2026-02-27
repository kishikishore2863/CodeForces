//
// Created by Kishi Kishore N on 27/02/26.
//
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sub =0;
        int maxi =0;
        int count =0;
        for (int i=0; i<n; i++) {
            if (s[i] == '.') {
                count++;
                sub++;
            }else if (s[i] == '#') {
                maxi = max(sub,maxi);
                sub = 0;
            }
        }
        if (maxi>=3 || sub>=3) {
            cout<<2<<endl;
        }else {
            cout<<count<<endl;
        }
    }
    return 0;
}