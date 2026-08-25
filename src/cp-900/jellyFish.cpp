//
// Created by Kishi Kishore N on 24/04/26.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b,n;
        cin>>a>>b>>n;

        int arr[n];
        for (int i=0; i<n; i++)cin>>arr[i];

       long long maximum_time = b;

        for (int i=0; i<n; i++) {
            long long min1 = min(arr[i],a-1);
            maximum_time = maximum_time+min1;
        }

        cout<<maximum_time<<endl;

    }
    return 0;
}