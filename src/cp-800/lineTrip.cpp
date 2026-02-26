//
// Created by Kishi Kishore N on 26/02/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n,x;
        cin>>n>>x;
        vector<long long> arr;
        arr.push_back(0);
        for (int i=0; i<n; i++) {
            long long ele;
            cin>>ele;
            arr.push_back(ele);
        }
        arr.push_back(x);
        n = arr.size();

        long long max_distance = INT_MIN;
        for (int i=1; i<n; i++) {
            if (i == n-1) {
                max_distance = max(max_distance, (arr[i]-arr[i-1])*2);
            }else {
                max_distance = max(max_distance,arr[i]-arr[i-1] );
            }
        }
        cout<<max_distance<<endl;
    }
    return 0;
}