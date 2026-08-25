//
// Created by Kishi Kishore N on 14/07/26.
//

# include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {2,5,1,5};// --> {2,5,1}f
    set<int> st;
    for (auto e:arr) {
        st.insert(e);
    }

    st.erase(st.begin()); //log(n)

    for (auto it=st.begin(); it!=st.end(); it++) {
        cout<<*it<<" ";
    }
    cout<<"------------------multiset ------------"<<endl;
    multiset<int> ms;
    for (auto e:arr) {
        ms.insert(e);
    }

    for (auto it = ms.begin(); it!= ms.end(); it++) {
        cout<<*it<<",";
    }
    cout<<""<<endl;

    auto it = ms.find(2);
    if (it!= ms.end())cout<<&(it)<<endl;
    else cout<<"not found"<<endl;





    return 0;
}