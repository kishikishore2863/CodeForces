//
// Created by Kishi Kishore N on 14/07/26.
//
#include <iostream>
#include<map>
using namespace std;

int main() {
    map<string,int> mpp;
    mpp["kishore"] = 1;
    mpp["boss"] = 2;


    for (auto it:mpp) {
        cout<<it.first<<":"<<it.second<<endl;
    }

    for (auto it= mpp.begin(); it!=mpp.end(); it++) {
        cout<<it->first<<":"<<it->second<<endl;
    }

    unordered_map<int,int> umpp;


    return 0;
}