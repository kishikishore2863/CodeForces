//
// Created by Kishi Kishore N on 05/05/26.
//
#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        char arr[n];
        for (int i=0; i<n; i++)cin>>arr[i];


        int count =1;
        int ans = 1;
        for (int i=0; i<n; i++) {
           if (arr[i] == '<') {
               count++;
           }else {
               count =1;
           }
           ans = max(ans,count);
        }
        int count1 =1;
        int ans1 = 1;
        for (int i=0; i<n; i++) {
            if (arr[i] == '>') {
                count1++;
            }else {
                count1 =1;
            }
            ans1 = max(ans1,count1);
        }
        int res = max(ans,ans1);
        cout<<res<<endl;
    }
}