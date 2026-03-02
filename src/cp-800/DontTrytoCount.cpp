//
// Created by Kishi Kishore N on 02/03/26.
//
#include <iostream>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        int m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        int op=0;
        int flag =0;
        if (x.find(s)!= string::npos) {
            cout<<0<<endl;
        }else {
            while (n<=25) {
                x +=x;
                op++;
                n = x.size();
                if (x.find(s)!= string::npos) {
                    flag=1;
                    break;
                }
            }
            if (flag) {
                cout<<op<<endl;
            }else {
                cout<<-1<<endl;
            }

        }
    }
    return 0;
}