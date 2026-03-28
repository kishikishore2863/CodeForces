//
// Created by Kishi Kishore N on 28/03/26.
//
#include<iostream>
using namespace  std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int count =0;
        for (int i=0; i<k; i++) {
            if (s[i] == 'W')count++;
        }
        int mina = count;
        int e=0;
       for (int i=k; i<n; i++) {
           if (s[i] == 'W')count++;
           if (s[e] == 'W')count--;
           mina = min(mina,count);
           e++;
       }

        cout<<mina<<endl;
    }

    return 0;
}