//
// Created by Kishi Kishore N on 08/03/26.
//
#include <iostream>
using namespace  std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int anna = 0;
        int katie = 0;
        anna =c- (c/2);
        katie = c/2;
        anna = anna+a;
        katie = katie+b;
        if (anna>katie) {
            cout<<"First"<<endl;
        }else {
            cout<<"Second"<<endl;
        }
    }
    return 0;
}