//
// Created by Kishi Kishore N on 21/03/26.
//
#include<iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        long long arr[n];
        for (long long i=0; i<n; i++) {
            cin>>arr[i];
        }

        long long total_number_twos=0;
        long long curr_twos=0;
        for (long long i:arr) {
            if (i == 2) {
                total_number_twos++;
            }
        }
        long long ans=-1;
        for (long long i=0; i<n; i++) {
            if (arr[i] == 2) {
                curr_twos++;
            }
            if (curr_twos == total_number_twos-curr_twos ) {
                ans = i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}