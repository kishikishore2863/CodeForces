//
// Created by Kishi Kishore N on 03/08/26.
//
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Subarrays_with_K_Different_Integers {
public:

    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int left=0;
        int right =0;
        unordered_map<int,int> m;
        int res = 0;

        for(;right<nums.size(); right++){
            m[nums[right]]++;

            while(m.size()>k){
                m[nums[left]]--;
                if(m[nums[left]] == 0){
                    m.erase(nums[left]);
                }

                left++;
            }
            if(m.size()==k)res++;
        }
        return res;
    }
};


int main() {
    Subarrays_with_K_Different_Integers s;
    int res = s.subarraysWithKDistinct(vector<int>()={1,2,1,2,3},2);
    cout<<res<<endl; ;
}