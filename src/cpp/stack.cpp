//
// Created by Kishi Kishore N on 14/07/26.
//
#include <iostream>
#include <stack>

using namespace std;

int main() {

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<"set"<<st.size()<<endl;

    cout<<"top element"<<st.top()<<endl; // top element it does not remove

    st.pop(); // for remove
    st.
    while (!st.empty()) {
        st.pop();
    }

    return 0;
}