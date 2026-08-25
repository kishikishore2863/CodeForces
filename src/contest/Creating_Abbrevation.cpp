//
// Created by Kishi Kishore N on 17/08/26.
//

#include <iostream>
using namespace std;


int main() {
    int testcase;
    cin>>testcase;
    while (testcase) {
        int n,m;
        cin>>n>>m;
        vector<string> ordinary;
        for (int i=0; i<n; i++) {
            string temp;
            cin>>temp;
            ordinary.push_back(temp);
        }
        string abrev = "";
        for (int i=0; i<m-1; i++) {
            string temp;
            cin>>temp;
            abrev += temp;
        }

        string last;
        cin>>last;

        int left = 0;
        int right = ordinary.size()-1;
        int a =0;
        int z=abrev.size();

        while (left<=right && a<z) {
            if () {

            }
        }
    }

    return 0;
}