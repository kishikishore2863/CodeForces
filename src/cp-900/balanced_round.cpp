//
// Created by Kishi Kishore N on 04/05/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)cin>>arr[i];

        sort(arr, arr + n);
        int ans =1;
        int count =1;
        for (int i=1; i<n;i++) {
            if (arr[i]-arr[i-1]<=k) {
                count++;
            }else {
                count =1;
            }
            ans = max(count,ans);
        }
        int res = n-ans;
        cout<<res<<endl;
    }
    return 0;
}