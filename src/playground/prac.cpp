#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<int> missing;
        for(int i=lower; i<=upper; i++){
            auto it = find(nums.begin(), nums.end(), i);
            if(it==nums.end()){
                missing.push_back(i);
            }
        }

        for (int mis:missing) {
            cout<<mis<<",";
        }
        cout<<endl;


    }
};



int main() {
    Solution s;
    vector<int> nums = {3,9,7};
    vector<vector<int>> res =s.findDisappearedNumbers(nums,1,12);
    for (vector<int> r:res) {
        cout<<"["<<r[0]<<","<<r[1]<<"]"<<endl;
    }

    return 0;
}