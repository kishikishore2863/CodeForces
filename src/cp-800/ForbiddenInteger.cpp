//
// Created by Kishi Kishore N on 11/03/26.
//
#include <iostream>
using namespace std;

bool dp(vector<int>&arr,int n,int curr,int index, int x,vector<int> &res);
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k,x;
        cin>>n>>k>>x;
        int sum=0;
        vector<int> list;
        for (int i=1;i<=k; i++) {
            list.push_back(i);
        }
        vector<int>result;
        bool res = dp(list,n,0,list.size()-1,x,result);
        if (res) {
            cout<<"YES"<<endl;
            cout<<result.size()<<endl;
            for (int i:result)cout<<i<<" ";
            cout<<endl;
        }else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

bool dp(vector<int>&arr,int n,int curr,int index, int x,vector<int> &res) {
    if (n == 0) {
        return true;
    }

    if (index < 0 || n < 0) return false;

    if (arr[index]<=n && arr[index]!=x ) {
        res.push_back(arr[index]);
        if ( dp(arr,n-arr[index],curr+arr[index],index,x,res)) {
            return true;
        }
        res.pop_back();
    }else {
        return dp(arr,n,curr,index-1,x,res);
    }

}