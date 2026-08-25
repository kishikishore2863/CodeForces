//
// Created by Kishi Kishore N on 14/07/26.
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << v[0] << endl;

    vector<vector<int> > vec;
    vec.push_back(v);
    vec.push_back(v);
    for (auto  ve:vec) {
        for (auto e:v) {
            cout<<e<<" ";
        }
        cout<<endl;
    }

    return 0;
}
