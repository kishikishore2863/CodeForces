//
// Created by Kishi Kishore N on 21/04/26.
//
#include <iostream>
using namespace  std;
class Solution {
public:


    int longestOnes(vector<int>& nums, int k) {
        int track =0;
        int count =0;
        int maxx =0;
        int l=0;
        for(int r=0; r<nums.size(); r++){
            if(nums[r] == 1)count++;
            if(nums[r] == 0 && track<=k){
                count++;
                track++;
            }
            if(nums[r] == 0 && track>k){
                while(track>k){
                    count--;
                    if(nums[l]==0){
                        track--;
                    }
                    l++;
                }
            }
            maxx = max(maxx,count);
        }
        return maxx;
    }

};

int main() {
    Solution s;
    vector<int> v;
    v = {1,1,1,0,0,0,1,1,1,1,0};
    int k= 2;
    int res = s.longestOnes(v,k);
    cout<<res<<endl;
}