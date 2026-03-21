//
// Created by Kishi Kishore N on 20/03/26.
//
#include <iostream>
#include <algorithm>
#include <cmath>

#include<numeric>
using namespace std;

int gcd(int a, int b);
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }


        int flag = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (gcd(arr[i], arr[j]) <= 2){
                    flag = 1;
                }
            }
        }

        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}

int gcd(int a, int b) {
    if (b == 0)return a;
    return gcd(b,a%b);
}
