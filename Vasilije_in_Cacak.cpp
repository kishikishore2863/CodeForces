//
// Created by Kishi Kishore N on 23/04/26.
//
#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
         long long  n;
         long long k;
         long long x;

        cin>>n>>k>>x;


         long long k_total = (k*(k+1))/2;
        // long long n_total = ((n*(n+1))/2)-k_total ;
        long long n_total =(n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        if (x<=n_total && x>=k_total) {
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
}