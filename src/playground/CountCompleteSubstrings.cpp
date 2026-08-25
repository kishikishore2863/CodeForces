//
// Created by Kishi Kishore N on 06/08/26.
//

#include <iostream>
#include <unordered_map>
using namespace std;


class Solution {
public:
    int countCompleteSubstrings(string word, int k) {
        int left = 0;
        int right = 1;
        unordered_map<char, int> m;
        int count = 0;
        for (; right < word.length(); right++) {
            // if (abs(word[right - 1] - word[right]) > 2) {
            //     // left =right;
            //     while (left < right) {
            //         if (m[word[left]] == 1)m.erase(word[left]);
            //         m[word[left]]--;
            //         left++;
            //     }
            //     continue;
            // }
            m[word[right]]++;

            while (m[word[right]] > k) {
                if (m[word[left]] == 0)m.erase(word[left]);
                else m[word[left]]--;
                left++;
            }


            bool verify = true;
            for (auto it = m.begin(); it != m.end(); it++) {
                if ( it->second != k ) {
                    verify = false;
                    break;
                }
            }

            for (const auto &pair: m) {
                std::cout << pair.first << " : " << pair.second << "\n";
            }
            cout << endl;

            if (verify)count++;
        }
        return count;
    }
};


int main() {
    Solution s;
    int res = s.countCompleteSubstrings("aaabbbccc",3);
    cout<<res<<endl;

}