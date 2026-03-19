//
// Created by Kishi Kishore N on 19/03/26.
//

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> memo;
    int hammingWeight(int n) {
        memo.assign(n+1,-1);
        dp(n);
        return memo[n];
    }

    int dp(int i){
        if(i == 0)return 0;
        if (memo[i] != -1)return memo[i];
        int res =0;
        if(i%2==0){
            res = dp(i/2);
        }else{
            res = dp(i/2)+1;
        }
        memo[i] = res;
        return res;
    }
};

int main() {
    Solution s1;
    int res =s1.hammingWeight(128);
    cout<<res<<endl;
    return 0;
}