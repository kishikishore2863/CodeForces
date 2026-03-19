//
// Created by Kishi Kishore N on 19/03/26.
//
#include<iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        string arr;
        cin >> n;
        cin >> arr;

        int start=0;
        int end=n-1;

        while (start < end) {
            if ((arr[start] == '1' && arr[end] == '0') || (arr[start] == '0' && arr[end] == '1')) {
                start++;
                end--;
            } else {
                break;
            }
        }
        cout<<(end-start)+1<<endl;
    }
    return 0;
}