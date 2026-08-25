//
// Created by Kishi Kishore N on 22/04/26.
//
#include <iostream>
using namespace std;

class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return  max(maxofT(answerKey,k),maxofF(answerKey,k));
        //TTFTTFTT
        //01234567
    }

    int maxofT(string answerKey, int k){
        int l=0;
        int r=0;
        int count =0;
        int track = 0;
        int max1 = 0;

        for(;r<answerKey.length(); r++){
            if(answerKey[r] == 'T')count++;
            if(answerKey[r] == 'F' ){
                track++;
                count++;
            }
             if(answerKey[r] == 'F' && track>k){
                while(track>k){
                    count--;
                    if(answerKey[l] == 'F'){
                        track--;
                    }
                    l++;
                }
            }
            max1 = max(max1,count);
        }
        return max1;
    }

    int maxofF(string answerKey, int k){
        int l=0;
        int r=0;
        int count =0;
        int track = 0;
        int max1 = 0;
        for(;r<answerKey.length(); r++){
            if(answerKey[r] == 'F')count++;
            if(answerKey[r] == 'T'){
                track++;
                count++;
            }
            if(answerKey[r] == 'T' && track>k){
                while(track>k){
                    count--;
                    if(answerKey[l] == 'T'){
                        track--;
                    }
                    l++;
                }
            }
            max1 = max(max1,count);
        }
        return max1;
    }
};


int main() {
    Solution s;
    bool c = 744437702&379056602;
    cout<<c<<endl;
    return 0;
}