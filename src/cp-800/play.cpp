//
// Created by Kishi Kishore N on 26/05/26.
//

#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin>>s;

    int small =0;
    int n = s.length();
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z'){
            small++;
        }
    }

    int large = n-small;

    if(large >small){
        for(int i=0; i<s.length(); i++){
            if(s[i]>='a' && s[i]<='z'){
                s[i] =s[i]-32;
            }
        }
    }else{
        for(int i=0; i<s.length(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i] =s[i]+32;
            }
        }

    }

    cout<<s<<endl;




    return 0;
}