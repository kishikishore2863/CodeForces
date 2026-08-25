//
// Created by Kishi Kishore N on 25/08/26.
//

#include <iostream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> m;

        int right=0;
        int left=0;

        int res = 0;

        for(; right<nums.size(); right++){
            m[nums[right]]++;

            if(m[nums[right]]>k){
                while(m[nums[right]]>k){
                    m[nums[left]]--;
                    if(m[nums[left]] == 0)m.erase(m[nums[left]]);
                    left++;
                }
            }
            for (const auto& [ele, freq] : m) {
                std::cout << ele << ": " << freq << "\n";
            }
            res = max(res,right-left+1);
        }

        return res;
    }
};


int main() {
    Solution s;
    vector<int> nums = {3,1,1};
    int res = s.maxSubarrayLength(nums,1);
    cout<<res<<endl;
    return 0;
}