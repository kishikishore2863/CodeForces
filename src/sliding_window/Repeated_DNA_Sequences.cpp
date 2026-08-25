//
// Created by Kishi Kishore N on 24/04/26.
//
#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> vs;
        set<string> set;
        for(int i=0; i<s.length()-10; i++){
            string pass = s.substr(i,10);
            int res = slide(s,pass);
            if(res){
                set.insert(pass);
            }
        }
        for (auto& x : set) {
            vs.push_back(x);
        }
        return vs;
    }

    int slide(string s,string k){
        int right=k.length()-1;
        int left =0;
        int count =0;
        for(;right<s.length(); right++){
            string sub = s.substr(left,10);
            if(sub.compare(k) == 0)count++;
            left++;
        }
        return count >=2?1:0;
    }
};

int main() {
    Solution s;
    vector<string> res =s.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT");
    for (string e:res) {
        cout<<e<<",";
    }
    return 0;
}