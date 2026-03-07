//
// Created by Kishi Kishore N on 07/03/26.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int la;
        cin>>la;
        int a[la];
        for (int i=0; i<la; i++) cin>>a[i];
        int max = 0;
        int count =0;
        vector<int> b,c;
        for (int i=0; i<la; i++) {
            if (max<a[i]) {
                max = a[i];
            }
        }
        for (int i=0; i<la; i++) {
            if (max==a[i]) {
                count++;
            }else {
                b.push_back(a[i]);
            }
        }

        while (count--) {
            c.push_back(max);
        }

        if (b.size() == 0||c.size() == 0) {
            cout<<-1<<endl;
        }else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for (int bi:b)cout<<bi<<" ";
            cout<<endl;
            for (int ci:c)cout<<ci<<" ";
            cout<<endl;
        }

    }
    return 0;
}