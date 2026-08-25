//
// Created by Kishi Kishore N on 12/08/26.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int right=0;
        int left=0;
        int res = 0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2 == 0)nums[i] = 0;
            else nums[i] = 1;
        }

        int count = 0;
        for(; right<nums.size(); right++){
            if(nums[right]%2 == 1)count++;
            int temp = count;
            int mid = left;


            while(count>k){
                if(nums[left]%2 == 1)count--;
                left++;
                left = mid;
            }

            if(count == k){
                while(nums[mid] != 1 && mid<=right){
                    mid++;
                }

                res += mid-left+1;
            }




        }
        return res;
    }
};


int main() {
    Solution s;
    vector<int>v = {2,2,2,1,2,2,1,2,2,2};
    int res = s.numberOfSubarrays(v,2);
    cout<<res<<endl;
    return 0;
}